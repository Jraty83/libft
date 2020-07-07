/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 09:46:51 by jraty             #+#    #+#             */
/*   Updated: 2020/07/07 11:59:24 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[i] && len)
	{
		while (haystack[i] != needle[i] && haystack[i] && len)
		{
			haystack++;
			len--;
		}
		i = 0;
		while (haystack[i] == needle[i] && len)
		{
			i++;
			len--;
		}
		if (needle[i] == '\0')
			return ((char*)haystack);
	}
	return (NULL);
}
