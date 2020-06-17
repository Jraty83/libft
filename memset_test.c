#include "../libft.h"
#include <stdio.h>
#define LEN 21

int main(void) {
	char arr[LEN];
	int	a;
	int i;

	a = 3;
	ft_memset(arr, a, LEN);
	printf("ft_memset output: ");
	i = 0;
	while(i < LEN)
	{
		printf("%d ", arr[i]);
		++i;
	}
	printf("\n");
	memset(arr, a, LEN);
	printf("memset output is: ");
	i = 0;
	while(i < LEN)
	{
		printf("%d ", arr[i]);
		++i;
	}
	printf("\n");
	return (0);
}
