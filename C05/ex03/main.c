#include<stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	i;

	i = -3;
	while (++i < 20)
		printf("%d\n",ft_recursive_power(0, i));
	i = -3;
	while (++i < 20)
		printf("%d\n",ft_recursive_power(1, i));
	i = -3;
	while (++i < 20)
		printf("%d\n",ft_recursive_power(5, i));
	i = -3;
	while (++i < 20)
		printf("%d\n",ft_recursive_power(-3, i));
	return (0);
}
