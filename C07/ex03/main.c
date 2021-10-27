#include<stdlib.h>
#include<stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*str[5] = {"asdf", "qwer", "zxcv", "aaaa", "zzzz"};
	char	*str2[5] = {"asdf", "", "zxcv", "aaaa", "zzzz"};
	char	*sep1 = ", ";
	char	*sep2 = "!@#sdkfjlaksdjf !@#%$";
	char	*tmp;

	tmp = ft_strjoin(3, str, sep1);
	printf("%s\n", tmp);
	free(tmp);
	tmp = ft_strjoin(3, str, sep2);
	printf("%s\n", tmp);
	free(tmp);
	tmp = ft_strjoin(3, str2, sep1);
	printf("%s\n", tmp);
	free(tmp);
	tmp = ft_strjoin(3, str2, sep2);
	printf("%s\n", tmp);
	free(tmp);
	return (0);

}
