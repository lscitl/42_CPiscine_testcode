#include "ft.h"
#include<stdio.h>

int	main(void)
{
	char	c;
	char	a;

	a = '\n';
	c = 'c';
	ft_putchar(c);
	ft_putchar(a);
	printf("%d", ft_strcmp("asdf", "asdc"));
	ft_putchar(a);
}
