#include<unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(2147438647, "0123156");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "012+34");
	write(1, "\n", 1);
	ft_putnbr_base(1234567890, "");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "OI");
	write(1, "\n", 1);
	ft_putnbr_base(256, "01");
	write(1, "\n", 1);
}
