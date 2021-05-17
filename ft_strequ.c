/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:38:47 by jraty             #+#    #+#             */
/*   Updated: 2021/05/17 09:23:55 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!(s1 && s2))
		return (0);
	while (*s1 == *s2 && *s1 && *s2)
	{
		++s1;
		++s2;
	}
	return (*s1 == '\0' && *s2 == '\0');
}
