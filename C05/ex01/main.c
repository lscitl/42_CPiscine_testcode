#include<stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int i = -5;
	while (++i < 10)
		printf("%d\n", ft_recursive_factorial(i));
}
