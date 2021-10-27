#include "ft_stock_str.h"
#include<stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char *argv[])
{
	t_stock_str	*str;
	int			i;

	str = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d, %s, %s\n", str[i].size, str[i].str, str[i].copy);
		i++;
	}
	return (0);
}
