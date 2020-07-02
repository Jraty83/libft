/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 18:13:14 by jraty             #+#    #+#             */
/*   Updated: 2020/07/01 09:48:36 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_end(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		++i;
		++s;
	}
	--s;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		--i;
		--s;
	}
	return (i);
}

static size_t	ft_begin(const char *s)
{
	size_t	i;

	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		++i;
		++s;
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	char	*ptr;
	size_t	begin;
	size_t	end;

	begin = ft_begin(s);
	end = ft_end(s);
	if (!(str = (char*)malloc(sizeof(char) * (end - begin + 1))))
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
	{
		++s;
	}
	ptr = str;
	while (begin < end)
	{
		*str++ = *s++;
		++begin;
	}
	*str = '\0';
	return (ptr);
}
