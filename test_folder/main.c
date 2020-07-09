/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraty <jraty@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 10:53:15 by jraty             #+#    #+#             */
/*   Updated: 2020/07/09 15:06:06 by jraty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LEN 25

///////// PART 1 /////////

// TEST ft_memset
/*int		main(void)
{
	int		a = 6, i;
	char	arr[LEN];

	ft_memset(arr, a, LEN);
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
	return (0);
}*/

// TEST ft_bzero
/*int		main(void)
{
	char	arr[LEN];
	int		i;

	ft_bzero(arr, LEN);
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
	return (0);
}*/

// TEST ft_memcpy
/*int		main(void)
{
	int		a = 12, i;
	char	source[] = "Keke Orava";
	char	arr[LEN];

	ft_memcpy(arr, source, a);
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
	return (0);
}*/

// TEST ft_memccpy
/*int		main(void)
{
	int		a = 12, b = 'k', i;
	char	source[] = "Keke Orava";
	char	arr[LEN];

	ft_memccpy(arr, source, b, a);
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
	return (0);
}*/

//TEST ft_memmove
/*int		main(void)
{
	char	src[100] = "Keke Orava";

	ft_memmove(src+5, src, ft_strlen(src)+1) && printf("ft_memmove output: %s\n", src) && memmove(src, src, ft_strlen(src)+1) && printf("memmove output is: %s\n", src);
	return (0);
}*/

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

// TEST ft_strlen
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_strlen output: %zu\n", ft_strlen(argv[1])) && printf("strlen output is: %zu\n", strlen(argv[1]));
	return (0);
}*/

// TEST ft_strdup
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_strdup output: %s\n", ft_strdup(argv[1])) && printf("strdup output is: %s\n", strdup(argv[1]));
	return (0);
}*/

// TEST ft_strcpy
/*int		main(int argc, char **argv)
{
	char	dst[100];

	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_strcpy output: %s\n", ft_strcpy(dst, argv[1])) && printf("strcpy output is: %s\n", strcpy(dst, argv[1]));
	return (0);
}*/

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
/*void		ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
#include <unistd.h>
int		main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	ft_putstr("ft_strlcat output: ");
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, " ", 1);
	write(1, dest, 15);
	write(1, "\n", 1);
	ft_putstr("strlcat output is: ");
	ft_print_result(strlcat(dest, "lorem ipsum dolor sit amet", 5));
	write(1, " ", 1);
	write(1, dest, 15);
	write(1, "\n", 1);
	return (0);
}*/

// TEST ft_strchr
/*int		main(void)
{
	char	*s;
	char	*ptr;
	int		letter;

	letter = 't';
	s = "computer program";
	ptr = ft_strchr(s, letter);
	printf("The first occurrence of '%c' in '%s' is '%s'\n", letter, s, ptr);
	letter = 'p';
	ptr = ft_strchr(s, letter);
	printf("The first occurrence of '%c' in '%s' is '%s'\n", letter, s, ptr);
	letter = '\0';
	ptr = ft_strchr(s, letter);
	printf("The first occurrence of '%c' in '%s' is '%s'\n", letter, s, ptr);
	return (0);
}*/

// TEST ft_strrchr
/*int		main(void)
{
	char	*s = "bonjour";
	char	*ptr;
	int		letter;

	letter = 'o';
	ptr = ft_strrchr(s, letter);
	printf( "The last occurrence of '%c' in '%s' is :\n'%s'\n", letter, s, ptr);

	letter = '\0';
	ptr = ft_strrchr(s, letter);
	printf( "The last occurrence of '%c' in '%s' is :\n'%s'\n", letter, s, ptr);

	letter = 'b';
	ptr = ft_strrchr(s + 2, letter);
	printf( "The last occurrence of '%c' in '%s' is :\n'%s'\n", letter, s, ptr);
	return (0);
}*/

// TEST ft_strstr
/*int		main(void)
{
	char *ptr;
	
	ptr = ft_strstr("Foo Bar Baz", "Bar");
	printf("%s\n", ptr);
	ptr = ft_strstr("Foo Ba Bar Baz", "Bar");
	printf("%s\n", ptr);
	ptr = ft_strstr("Foo Bar Baz", "");
	printf("%s\n", ptr);
	ptr = ft_strstr("Foo Bar Baz", "lorem");
	printf("%s\n", ptr);
	return (0);
}*/

// TEST ft_strnstr
/*int		main(void)
{
	char *ptr;
	
	ptr = ft_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	printf("%s\n", ptr);
	ptr = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("%s\n", ptr);
	ptr = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	printf("%s\n", ptr);
	return (0);
}*/

// TEST ft_strcmp
/*int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\033[31mERROR: Enter 2 arguments!\033[0m\n");
		return (0);
	}
	printf("ft_strcmp output: %d\n", ft_strcmp(argv[1], argv[2])) && printf("strcmp output is: %d\n", strcmp(argv[1], argv[2]));
	return (0);
}*/

// TEST ft_strncmp
/*int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putstr("\033[31mERROR: Enter 3 arguments!\033[0m\n");
		return (0);
	}
	printf("ft_strncmp output: %d\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3]))) && printf("strncmp output is: %d\n", strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}*/

// TEST ft_atoi
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_atoi output: %d\n", ft_atoi(argv[1])) && printf("atoi output is: %d\n", atoi(argv[1]));
	return (0);
}*/

// TEST ft_isalpha
/*int		main(void)
{
	int		a = 'i', b = 'K', c = '0', d = '*';
	printf("ft_isalpha output: %d\n", ft_isalpha(a)) && printf("isalpha output is: %d\n", isalpha(a));
	printf("ft_isalpha output: %d\n", ft_isalpha(b)) && printf("isalpha output is: %d\n", isalpha(b));
	printf("ft_isalpha output: %d\n", ft_isalpha(c)) && printf("isalpha output is: %d\n", isalpha(c));
	printf("ft_isalpha output: %d\n", ft_isalpha(d)) && printf("isalpha output is: %d\n", isalpha(d));
	return (0);
}*/

// TEST ft_isdigit
/*int		main(void)
{
	int		a = 'i', b = 'K', c = '0', d = '*';
	printf("ft_isdigit output: %d\n", ft_isdigit(a)) && printf("isdigit output is: %d\n", isdigit(a));
	printf("ft_isdigit output: %d\n", ft_isdigit(b)) && printf("isdigit output is: %d\n", isdigit(b));
	printf("ft_isdigit output: %d\n", ft_isdigit(c)) && printf("isdigit output is: %d\n", isdigit(c));
	printf("ft_isdigit output: %d\n", ft_isdigit(d)) && printf("isdigit output is: %d\n", isdigit(d));
	return (0);
}*/

// TEST ft_isalnum
/*int		main(void)
{
	int		a = 'i', b = 'K', c = '0', d = '*';
	printf("ft_isalnum output: %d\n", ft_isalnum(a)) && printf("isalnum output is: %d\n", isalnum(a));
	printf("ft_isalnum output: %d\n", ft_isalnum(b)) && printf("isalnum output is: %d\n", isalnum(b));
	printf("ft_isalnum output: %d\n", ft_isalnum(c)) && printf("isalnum output is: %d\n", isalnum(c));
	printf("ft_isalnum output: %d\n", ft_isalnum(d)) && printf("isalnum output is: %d\n", isalnum(d));
	return (0);
}*/

// TEST ft_isascii
/*int		main(void)
{
	int		a = 'i', b = 333, c = '0', d = '*';
	printf("ft_isascii output: %d\n", ft_isascii(a)) && printf("isascii output is: %d\n", isascii(a));
	printf("ft_isascii output: %d\n", ft_isascii(b)) && printf("isascii output is: %d\n", isascii(b));
	printf("ft_isascii output: %d\n", ft_isascii(c)) && printf("isascii output is: %d\n", isascii(c));
	printf("ft_isascii output: %d\n", ft_isascii(d)) && printf("isascii output is: %d\n", isascii(d));
	return (0);
}*/

// TEST ft_isprint
/*int		main(void)
{
	int		a = 'i', b = 'K', c = '0', d = 5;
	printf("ft_isprint output: %d\n", ft_isprint(a)) && printf("isprint output is: %d\n", isprint(a));
	printf("ft_isprint output: %d\n", ft_isprint(b)) && printf("isprint output is: %d\n", isprint(b));
	printf("ft_isprint output: %d\n", ft_isprint(c)) && printf("isprint output is: %d\n", isprint(c));
	printf("ft_isprint output: %d\n", ft_isprint(d)) && printf("isprint output is: %d\n", isprint(d));
	return (0);
}*/

// TEST ft_toupper
/*int		main(void)
{
	int		a = 'i', b = 'K', c = '0', d = '*';
	printf("ft_toupper output: %c\n", ft_toupper(a)) && printf("toupper output is: %c\n", toupper(a));
	printf("ft_toupper output: %c\n", ft_toupper(b)) && printf("toupper output is: %c\n", toupper(b));
	printf("ft_toupper output: %c\n", ft_toupper(c)) && printf("toupper output is: %c\n", toupper(c));
	printf("ft_toupper output: %c\n", ft_toupper(d)) && printf("toupper output is: %c\n", toupper(d));
	return (0);
}*/

// TEST ft_tolower
/*int		main(void)
{
	int		a = 'i', b = 'K', c = '0', d = '*';
	printf("ft_tolower output: %c\n", ft_tolower(a)) && printf("tolower output is: %c\n", tolower(a));
	printf("ft_tolower output: %c\n", ft_tolower(b)) && printf("tolower output is: %c\n", tolower(b));
	printf("ft_tolower output: %c\n", ft_tolower(c)) && printf("tolower output is: %c\n", tolower(c));
	printf("ft_tolower output: %c\n", ft_tolower(d)) && printf("tolower output is: %c\n", tolower(d));
	return (0);
}*/

///////// PART 2 /////////

// TEST ft_memalloc
/*int		main(void)
{
	char	*str;
	size_t	a = 10;

	if (!(str = (char*)ft_memalloc(a)))
		write(1, "NULL", 4);
	return (0);
}*/

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

// TEST ft_strnew
/*int		main(void)
{
	size_t	a = 15, b = 3, c = 42, i = 0;
	char	ar1[a], ar2[b], ar3[c];

	ft_strnew(a);
	printf("ft_strnew output: ");
	while (i < a)
		printf("%d ", ar1[i++]);
	printf("\n");
	i = 0;
	ft_strnew(b);
	printf("ft_strnew output: ");
	while (i < b)
		printf("%d ", ar2[i++]);
	printf("\n");
	i = 0;
	ft_strnew(c);
	printf("ft_strnew output: ");
	while (i < c)
		printf("%d ", ar3[i++]);
	printf("\n");
	return (0);
}*/

// TEST ft_strdel
/*int		main(void)
{
	printf("ft_strdel output: ");
	char **tofree2;
	tofree2 = ft_memalloc(1);
	tofree2[0] = ft_strnew(2);
	tofree2[0][0] = 'y';
	tofree2[0][1] = 'o';
	tofree2[0][2] = '\0';
	tofree2[1] = NULL;
	ft_strdel(tofree2);
	printf("%s\n", tofree2[0]);
	return (0);
}*/

// TEST ft_strclr
/*int		main(void)
{
	char	source[] = "Keke Orava";

	ft_putstr("string before ft_strclr: "), ft_putstr(source);;
	ft_strclr(source);
	ft_putstr("\nstring  after ft_strclr: \n"), ft_putstr(source);
	return (0);
}*/

// TEST ft_striter
/*void		iter(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int		main(void)
{
	char	str[] = "keke ORAVA";
	
	ft_putstr("Original  string  is: "), ft_putstr(str), ft_putstr("\n");
	ft_striter(str, &iter);
	ft_putstr("Output after striter: "), ft_putstr(str), ft_putstr("\n");
	return (0);
}*/

// TEST ft_striteri
/*void		iteri(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int		main(void)
{
	char	str[] = "keke ORAVA";
	
	ft_putstr("Original  string  is: "), ft_putstr(str), ft_putstr("\n");
	ft_striteri(str, &iteri);
	ft_putstr("Output after striter: "), ft_putstr(str), ft_putstr("\n");
	return (0);
}*/

// TEST ft_strmap
/*char		map(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		main(void)
{
	char	str[] = "keke ORAVA";
	
	printf("original  string  is: %s\n", str) && printf("after  ft_strmap  is: %s\n", ft_strmap(str, &map));
	return (0);
}*/

// TEST ft_strmapi
/*char		mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		main(void)
{
	char	str[] = "keke ORAVA";
	
	printf("original  string  is: %s\n", str) && printf("after  ft_strmapi is: %s\n", ft_strmapi(str, &mapi));
	return (0);
}*/

// TEST ft_strequ
/*int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\033[31mERROR: Enter 2 arguments!\033[0m\n");
		return (0);
	}
	printf("ft_strequ output: %d\n", ft_strequ(argv[1], argv[2]));
	return (0);
}*/

// TEST ft_strnequ
/*int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putstr("\033[31mERROR: Enter 3 arguments!\033[0m\n");
		return (0);
	}
	printf("ft_strequ output: %d\n", ft_strnequ(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}*/

// TEST ft_strsub
/*int		main(int argc, char **argv)	
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_strsub output: %s\n", ft_strsub(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	return (0);
}*/

// TEST ft_strjoin
/*int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\033[31mERROR: Enter 2 arguments!\033[0m\n");
		return (0);
	}
	printf("ft_strjoin output: %s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
}*/

// TEST ft_strtrim
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_strtrim output: %s\n", ft_strtrim(argv[1]));
	return (0);
}*/

// TEST ft_strsplit
/*int		main(void)
{
	char	**arr;

	printf("*hello*fellow***students*, '*':\n");
	arr = ft_strsplit("*hello*fellow***students*", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\n*he**llo*fel**low***stu*d*ents*, '*':\n");
	arr = ft_strsplit("*he**llo*fel**low***stu*d*ents*", '*');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	printf("\nlorem ipsum dolor sit amet., 'z':\n");
	arr = ft_strsplit("lorem ipsum dolor sit amet.", 'z');
	while (*arr)
	{
		printf("%s\n", *arr++);
	}
	return (0);
}*/

// TEST ft_itoa
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_itoa output: %s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}*/

// TEST ft_putchar
/*int		main(void)
{
	char a = 'k', b = '5', c = 'E';
	ft_putstr("Test1: the output of ft_putchar with a 'k' is: "), ft_putchar(a), ft_putstr("\n");
	ft_putstr("Test2: the output of ft_putchar with a '5' is: "), ft_putchar(b), ft_putstr("\n");
	ft_putstr("Test3: the output of ft_putchar with a 'E' is: "), ft_putchar(c), ft_putstr("\n");
	return (0);
}*/

// TEST ft_putstr
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	ft_putstr(argv[1]);
	return (0);
}*/

// TEST ft_putendl
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	ft_putendl(argv[1]);
	return (0);
}*/

// TEST ft_putnbr
/*int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	ft_putnbr(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}*/

// TEST ft_putchar_fd
/*int		main(void)
{
	char	a = 'E';

	ft_putstr("Test1: the output of ft_putchar_fd(0) with a 'E' is: "), ft_putchar_fd(a, 0), ft_putstr("\n");
	ft_putstr("Test2: the output of ft_putchar_fd(4) with a 'E' is: "), ft_putchar_fd(a, 4), ft_putstr("\n");
	ft_putstr("Test3: the output of ft_putchar_fd(1) with a 'E' is: "), ft_putchar_fd(a, 1), ft_putstr("\n");
	ft_putstr("Test2: the output of ft_putchar_fd(3) with a 'E' is: "), ft_putchar_fd(a, 3), ft_putstr("\n");
	ft_putstr("Test3: the output of ft_putchar_fd(2) with a 'E' is: "), ft_putchar_fd(a, 2), ft_putstr("\n");
	return (0);
}*/

// TEST ft_putstr_fd
/*int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\033[31mERROR: Enter 2 arguments!\033[0m\n");
		return (0);
	}
	ft_putstr_fd(argv[1], ft_atoi(argv[2]));
	return (0);
}*/

// TEST ft_putendl_fd
/*int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\033[31mERROR: Enter 2 arguments!\033[0m\n");
		return (0);
	}
	ft_putendl_fd(argv[1], ft_atoi(argv[2]));
	return (0);
}*/

// TEST ft_putnbr_fd
/*int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\033[31mERROR: Enter 2 arguments!\033[0m\n");
		return (0);
	}
	ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}*/

///////// BONUS /////////

// TEST ft_lstnew
int		main(void)
{

	return (0);
}

///////// EXTRA /////////

// TEST ft_isupper
/*int		main(void)
{
	int		a = 'K';
	printf("ft_isupper output: %d\n", ft_isupper(a)) && printf("isupper output is: %d\n", isupper(a));
	return (0);
}*/

// TEST ft_islower
/*int		main(void)
{
	int		a = 'i';
	printf("ft_islower output: %d\n", ft_islower(a)) && printf("islower output is: %d\n", islower(a));
	return (0);
}*/

// TEST ft_isspace
/*int		main(void)
{
	int		a = ' ';
	printf("ft_isspace output: %d\n", ft_isspace(a)) && printf("isspace output is: %d\n", isspace(a));
	return (0);
}*/

// TEST ft_isblank
/*int		main(void)
{
	int		a = '\t';
	printf("ft_isblank output: %d\n", ft_isblank(a)) && printf("isblank output is: %d\n", isblank(a));
	return (0);
}*/

// TEST ft_isnumber
/*int		main(void)
{
	int		a = '6';
	printf("ft_isnumber output: %d\n", ft_isnumber(a)) && printf("isnumber output is: %d\n", isnumber(a));
	return (0);
}*/

// TEST ft_strndup
/*int		main(int argc, char **argv)
{
	size_t	n = 6;

	if (argc < 2)
	{
		ft_putstr("\033[31mERROR: No arguments given!\033[0m\n");
		return (0);
	}
	printf("ft_strndup output: %s\n", ft_strndup(argv[1], n)) && printf("strndup output is: %s\n", strndup(argv[1], n));
	return (0);
}*/

// TEST ft_strclen
/*int		main(void)
{
	const char	*str = "****hello***";
	char		a = '*';
	printf("length of '%s' without '%c's is: %d\n", str, a, ft_strclen(str, a));
	return (0);
}*/
