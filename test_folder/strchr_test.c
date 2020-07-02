/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:10:08 by jraty             #+#    #+#             */
/*   Updated: 2020/07/01 09:49:02 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int		main(void)
{
	char	*s;
	char	*ptr;
	int		letter;

	letter = 't';
	s = "computer program";
	ptr = ft_strchr(s, letter);
	printf("ft_strchr output: The first occurrence of %c in '%s' is '%s'\n", letter, s, ptr);
	ptr = strchr(s, letter);
	printf("strchr output is: The first occurrence of %c in '%s' is '%s'\n", letter, s, ptr);
}
