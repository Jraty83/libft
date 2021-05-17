/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 17:49:05 by jraty             #+#    #+#             */
/*   Updated: 2021/05/17 10:43:47 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		++i;
	if (s[i] == '\0')
		return (ft_strnew(0));
	while (s[j + 1])
		++j;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		--j;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	while (i <= j)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
