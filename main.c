#include <stdio.h>
#include <strings.h>
#include <string.h>

char	*ft_strcpy(char *dst, const char *src);
void	ft_strclr(char *s);

int	main(void)
{
	char source[] = "Keke Orava";
	char destination[11];

//	ft_strclr(source);
	printf("ft_strcpy output: %s\n", ft_strcpy(destination, source)) && printf("strcpy output is: %s\n", strcpy(destination, source));
	return (0);
}
