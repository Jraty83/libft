/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 10:53:15 by jraty             #+#    #+#             */
/*   Updated: 2020/07/06 16:59:26 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LEN 25


/*int		main(int argc, char **argv)
{
//	int		fd;
//	int		a;

//	fd = 1;
//	a = 4;
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}*/

//int		main(void)
//{
//	int		a;
//	int		b;
//	size_t	a;
//	int		fd;
//	int		i;
//	char	source[] = "Keke Orava";
//	char	src[100] = "Geeksfor";
//	char	destination[25];
//	char	arr[LEN];

//	a = 2;
//	b = 'a';
//	fd = 3;
//	i = 0;

/*	ft_bzero(arr, LEN);
    printf("ft_bzero output: ");
    i = 0;
    while(i < LEN)
        printf("%d ", arr[i++]);
    printf("\n");
	bzero(arr, LEN);
    printf("bzero output is: ");
    i = 0;
    while(i < LEN)
        printf("%d ", arr[i++]);
    printf("\n");
*/

// TEST ft_memchr
/*int		main(void)
{
	char	source[] = "Keke Orava";
	size_t a = 2, b = 10, c = 20;
	int x = 'a', y = 'k';

	ft_putstr(ft_memchr(source, x, a) == memchr(source, x, a) ? "ft_memchr \033[32mTest1: OK!\033[0m\n" : "ft_memchr \033[31mTest1: Fails...\033[0m\n");
	ft_putstr(ft_memchr(source, x, b) == memchr(source, x, b) ? "ft_memchr \033[32mTest2: OK!\033[0m\n" : "ft_memchr \033[31mTest2: Fails...\033[0m\n");
	ft_putstr(ft_memchr(source, y, c) == memchr(source, y, c) ? "ft_memchr \033[32mTest3: OK!\033[0m\n" : "ft_memchr \033[31mTest3: Fails...\033[0m\n");
	return (0);
}*/

// TEST ft_memcmp
/*int		main(void)
{
	char	s1[] = "Keke Orava";
	char	s2[] = "Keke Orava";
	char	s3[] = "Keke ORAVA";
	char	s4[] = "KEKE Orava";
	char	s5[] = "          ";

	ft_putstr(ft_memcmp(s1, s2, 11) == memcmp(s1, s2, 11) ? "ft_memcmp \033[32mTest1: OK!\033[0m\n" : "ft_memcmp \033[31mTest1: Fails...\033[0m\n");
	ft_putstr(ft_memcmp(s1, s3, 11) == memcmp(s1, s3, 11) ? "ft_memcmp \033[32mTest2: OK!\033[0m\n" : "ft_memcmp \033[31mTest2: Fails...\033[0m\n");
	ft_putstr(ft_memcmp(s1, s4, 11) == memcmp(s1, s4, 11) ? "ft_memcmp \033[32mTest3: OK!\033[0m\n" : "ft_memcmp \033[31mTest3: Fails...\033[0m\n");
	ft_putstr(ft_memcmp(s1, s5, 11) == memcmp(s1, s5, 11) ? "ft_memcmp \033[32mTest4: OK!\033[0m\n" : "ft_memcmp \033[31mTest4: Fails...\033[0m\n");
	return (0);
}*/

/*	ft_memcpy(arr, source, a);
    printf("ft_memcpy output: ");
    i = 0;
    while(i < LEN)
        printf("%d ", arr[i++]);
    printf("\n");
	memcpy(arr, source, a);
    printf("memcpy output is: ");
    i = 0;
    while(i < LEN)
    	printf("%d ", arr[i++]);
    printf("\n");
*/
/*	ft_memccpy(arr, source, b, a);
    printf("ft_memccpy output: ");
    i = 0;
    while(i < LEN)
        printf("%d ", arr[i++]);
    printf("\n");
	memccpy(arr, source, b, a);
    printf("memccpy output is: ");
    i = 0;
    while(i < LEN)
    	printf("%d ", arr[i++]);
    printf("\n");
*/

// TEST ft_memdel
/*int		main(void)
{
	void	*arr;

	if (!(arr = ft_memalloc(10)))
		return (0);
	ft_memdel(&arr);
	ft_putstr((arr == NULL) ? "ft_memdel \033[32mTest1: OK!\033[0m\n" : "ft_memdel \033[31mTest1: Fails...\033[0m\n");
	if (!(arr = ft_memalloc(0)))
		return (0);
	ft_memdel(&arr);
	ft_putstr((arr == NULL) ? "ft_memdel \033[32mTest2: OK!\033[0m\n" : "ft_memdel \033[31mTest2: Fails...\033[0m\n");
	return (0);
}*/

//	ft_memmove(src+5, src, ft_strlen(src)+1) && printf("ft_memmove output: %s\n", src) && memmove(src, src, ft_strlen(src)+1) && printf("memmove output is: %s\n", src);

/*	ft_memset(arr, a, LEN);
	printf("ft_memset output: ");
	i = 0;
	while (i < LEN)
		printf("%d ", arr[i++]);
	printf("\n");
	memset(arr, a, LEN);
	printf("memset output is: ");
	i = 0;
	while(i < LEN)
		printf("%d ", arr[i++]);
	printf("\n");
*/
//	ft_memalloc(a);
//	ft_putnbr(a);
//	ft_putnbr_fd(a, fd);

// ft_putchar
/*int		main(void)
{
	char a = 'k', b = '5', c = 'E';
	ft_putstr("Test1: the output of ft_putchar with a 'k' is: "), ft_putchar(a), ft_putstr("\n");
	ft_putstr("Test2: the output of ft_putchar with a '5' is: "), ft_putchar(b), ft_putstr("\n");
	ft_putstr("Test3: the output of ft_putchar with a 'E' is: "), ft_putchar(c), ft_putstr("\n");
	return (0);
}*/

//	ft_putchar_fd(a, fd);
//	ft_strclr(source);
//	printf("ft_isalnum output: %d\n", ft_isalnum(a)) && printf("isalnum output is: %d\n", isalnum(a));
//	printf("ft_isalpha output: %d\n", ft_isalpha(a)) && printf("isalpha output is: %d\n", isalpha(a));
//	printf("ft_isascii output: %d\n", ft_isascii(a)) && printf("isascii output is: %d\n", isascii(a));
//	printf("ft_isdigit output: %d\n", ft_isdigit(a)) && printf("isdigit output is: %d\n", isdigit(a));
//	printf("ft_isprint output: %d\n", ft_isprint(a)) && printf("isprint output is: %d\n", isprint(a));
//	printf("ft_isspace output: %d\n", ft_isspace(a)) && printf("isspace output is: %d\n", isspace(a));
//	printf("ft_itoa output: %s\n", ft_itoa(a));
//	printf("ft_tolower output: %c\n", ft_tolower(a)) && printf("tolower output is: %c\n", tolower(a));
//	printf("ft_toupper output: %c\n", ft_toupper(a)) && printf("toupper output is: %c\n", toupper(a));
//	ft_putstr(argv[1]);
//	ft_putstr_fd(argv[1], fd);
//	ft_putendl(argv[1]);
//	ft_putendl_fd(argv[1], fd);
//	printf("ft_atoi output: %d\n", ft_atoi(argv[1])) && printf("atoi output is: %d\n", atoi(argv[1]));

// TEST ft_strcat
/*int		main(void)
{
	char	s1[100] = "Keke";
	char	*s2 = "Orava";
	
	printf("%s\n", ft_strcat(s1, s2));
	return (0);
}*/

// TEST ft_strncat
/*int		main(void)
{
	char	s1[100] = "Keke";
	char	*s2 = "Orava";
	size_t	n = 1;
	
	printf("%s\n", ft_strncat(s1, s2, n));
	return (0);
}*/

// TEST ft_strlcat

#include <unistd.h>

void    ft_print_result(int n)
{
    char c;

    if (n >= 10)
        ft_print_result(n / 10);
    c = n % 10 + '0';
    write (1, &c, 1);
}

int        main(void)
{
    char    *dest;
    
    if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
        return (0);
   	memset(dest, 0, 15);
    memset(dest, 'r', 6);
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, "\n", 1);
	write(1, dest, 15);
    return (0);
}

//	printf("ft_strcmp output: %d\n", ft_strcmp(argv[1], argv[2])) && printf("strcmp output is: %d\n", strcmp(argv[1], argv[2]));
//	printf("ft_strncmp output: %d\n", ft_strncmp(argv[1], argv[2], a)) && printf("strncmp output is: %d\n", strncmp(argv[1], argv[2], a));
//	printf("ft_strcpy output: %s\n", ft_strcpy(destination, source)) && printf("strcpy output is: %s\n", strcpy(destination, source));

// TEST ft_strncpy
/*int		main(void)
{
	char	src[] = "Keke Orava";
	char	dst[25];
	size_t	a = 6, b = 2, c = 16;

	ft_putstr(ft_strncpy(dst, src, a) == strncpy(dst, src, a) ? "ft_strncpy \033[32mTest1: OK!\033[0m\n" : "ft_strncpy \033[31mTest1: Fails...\033[0m\n");
	ft_putstr(ft_strncpy(dst, "", b) == strncpy(dst, "", b) ? "ft_strncpy \033[32mTest2: OK!\033[0m\n" : "ft_strncpy \033[31mTest2: Fails...\033[0m\n");
	ft_putstr(ft_strncpy(dst, src, sizeof(src)) == strncpy(dst, src, sizeof(src)) ? "ft_strncpy \033[32mTest3: OK!\033[0m\n" : "ft_strncpy \033[31mTest3: Fails...\033[0m\n");
	ft_putstr(ft_strncpy(dst, "morjensta poytaan", c) == strncpy(dst, "morjensta poytaan", c) ? "ft_strncpy \033[32mTest4: OK!\033[0m\n" : "ft_strncpy \033[31mTest4: Fails...\033[0m\n");
	return (0);
}*/

//	printf("ft_strdup output: %s\n", ft_strdup(argv[1])) && printf("strdup output is: %s\n", strdup(argv[1]));
//	printf("ft_strequ output: %d\n", ft_strequ(argv[1], argv[2]));
//	printf("ft_strnequ output: %d\n", ft_strnequ(argv[1], argv[2], a));
//	printf("ft_strjoin output: %s\n", ft_strjoin(argv[1], argv[2]));
//	printf("ft_strlen output: %zu\n", ft_strlen(argv[1])) && printf("strlen output is: %zu\n", strlen(argv[1]));
//	printf("ft_strsub output: %s\n", ft_strsub(source, i, a));
//	printf("ft_strtrim output: %s\n", ft_strtrim(argv[1]));
//	return (0);
//}