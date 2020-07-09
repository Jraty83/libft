/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 17:49:05 by jraty             #+#    #+#             */
/*   Updated: 2020/07/09 12:42:23 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	while (s[j + 1])
		++j;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		--j;
	++j;
	if (j == 0)
		return ((char*)ft_memset(ft_strdup(s), 0, i));
	if (!(str = (char*)malloc(sizeof(char) * (j - i + 1))))
		return (0);
	ptr = str;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		++s;
	while (i++ < j)
		*str++ = *s++;
	*str = '\0';
	return (ptr);
}
