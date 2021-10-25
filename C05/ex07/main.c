#include<stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	i;

	i = -4;
	while (++i < 30)
		printf("next prime of %d = %d \n", i, ft_find_next_prime(i));
	i = 0x7FFFFF00;
	while (++i < 0x7FFFFFFF)
		printf("next prime of %d = %d \n", i, ft_find_next_prime(i));
	printf("next prime of %d = %d \n", 0x7FFFFFFF, ft_find_next_prime(0x7FFFFFFF));
	return (0);
}
