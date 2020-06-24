#include <stdio.h>
#include <strings.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);
char	*ft_strcpy(char *dst, const char *src);

int	main(void)
{
	char source[] = "Keke Orava";
	char destination[11];
//	const char *restrict s1;
//	const char *restrict s2;

//	s1 = "keke";
//	s2 = "orava";
	printf("ft_strcpy output: %s\n", ft_strcpy(destination, source));
	printf("strcpy output is: %s\n", strcpy(destination, source));
//	printf("ft_bzero output: \n", ft_bzero(argv[1], 4));
//	printf("bzero output is: %s\n", bzero(str, 4));
//	strcat(s1, s2);
//	printf("%s\n", s1);
	return (0);
}
