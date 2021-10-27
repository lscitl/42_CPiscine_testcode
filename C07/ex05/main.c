#include<stdio.h>
#include<stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**strings;
	char	str[] = "aoilsejuflsdfasdfasdf";
	char	*sep = "afc";
	int		i;

	strings = ft_split(str, sep);
	i = 0;
	printf("%s\n", str);
	while (strings[i])
	{
		printf("%s\n", strings[i]);
		free(strings[i]);
		i++;
	}
	free(strings);
	return (0);
}
