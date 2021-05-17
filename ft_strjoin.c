/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:15:06 by jraty             #+#    #+#             */
/*   Updated: 2021/05/17 12:47:23 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;
	int		len;

	if (!(s1 && s2))
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ptr = str;
	while (len--)
	{
		while (*s1)
			*str++ = *s1++;
		while (*s2)
			*str++ = *s2++;
	}
	*str = '\0';
	return (ptr);
}
