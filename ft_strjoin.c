/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:15:06 by jraty             #+#    #+#             */
/*   Updated: 2020/06/30 13:29:31 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;
	int		len;

	len = (ft_strlen(s1) + ft_strlen(s2));
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ptr = str;
	while (len)
	{
		while (*s1)
		{
			*str++ = *s1++;
			--len;
		}
		while (*s2)
		{
			*str++ = *s2++;
			--len;
		}
	}
	*str = '\0';
	return (ptr);
}
