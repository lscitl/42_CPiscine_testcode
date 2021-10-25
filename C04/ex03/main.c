#include<stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi("\t\n\f\v--+--+-2147483648"));
	return (0);
}
