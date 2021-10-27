#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max);

void	minmaxprint(int min, int max)
{
	int	k;
	int	*p;

	p = ft_range(min, max);
	k = 0;
	while (k < max - min)
	{
		printf("%d ", p[k]);
		k++;
	}
	printf("\n");
	free(p);
}

int	main(void)
{
	minmaxprint(0, 5);
	minmaxprint(10, 20);
	minmaxprint(500, 700);
	minmaxprint(-500, 500);
	minmaxprint(0x7FFFFF00, 0x7FFFFFFF);
	minmaxprint(0xFFFFFF00, 0xFFFFFFFF);
	return (0);
}
