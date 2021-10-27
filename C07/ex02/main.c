#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	len;
	int	i = 0;

	len = ft_ultimate_range(&range, 4, 8);
	while (i < 4)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("len: %d ", len);
	printf("\n");
	free(range);
	return (0);
}
