#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int		main(void)
{
	char	*s;
	char	*ptr;
	int		letter;

	letter = 'p';
	s = "computer program";
	ptr = ft_strchr(s, letter);
	printf( "The first occurrence of %c in '%s' is '%s'\n", letter, s, ptr);
}
