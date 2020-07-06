/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:25:02 by jraty             #+#    #+#             */
/*   Updated: 2020/07/06 23:37:07 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;

	s_len = ft_strlen(s);
	while (*s)
		s++;
	if ((char)c == '\0')
		return ((char*)s);
	s--;
	while (*s != (char)c && *s && s_len--)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
