/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:01:03 by jraty             #+#    #+#             */
/*   Updated: 2020/07/01 09:47:49 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
		{
			++s;
		}
		if (*s)
			++i;
		while (*s != c && *s)
		{
			++s;
		}
	}
	return (i);
}

static int	ft_count_len(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c)
	{
		++s;
	}
	while (s[i] != c && s[i])
	{
		++i;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		words;
	int		i;

	i = 0;
	words = ft_count_words(s, c);
	if (!(str = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (words > 0)
	{
		while (*s == c)
		{
			++s;
		}
		str[i] = ft_strsub(s, 0, ft_count_len(s, c));
		while (*s && *s != c)
		{
			++s;
		}
		++i;
		--words;
	}
	str[i] = 0;
	return (str);
}
