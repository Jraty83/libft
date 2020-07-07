#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int		main(void)
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
}
