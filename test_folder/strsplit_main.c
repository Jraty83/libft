/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:57:47 by jraty             #+#    #+#             */
/*   Updated: 2020/07/01 09:49:11 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_strsplit(char const *s, char c);

int		main(void)
{
	char	**arr;

	printf("\n");
	printf("original:\n");
	arr = ft_strsplit("*hello*fellow***students*", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	printf("no stars at the start:\n");
	arr = ft_strsplit("hello*****fellow******students****", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	printf("no stars in the end:\n");
	arr = ft_strsplit("****hello*fellow***students", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	printf("seven words:\n");
	arr = ft_strsplit("*he**llo*fel**low***stu*d*ents*", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	printf("only stars:\n");
	arr = ft_strsplit("******", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	printf("empty string:\n");
	arr = ft_strsplit("", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	printf("this one failed before:\n");
	arr = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n");
	return (0);
}
