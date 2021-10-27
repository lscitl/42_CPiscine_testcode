#include<stdio.h>
#include<stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*tmp;
	char	str[] = "asdfjkl";

	tmp = ft_strdup(str);
	printf("%s", tmp);
	free(tmp);
	return (0);
}
