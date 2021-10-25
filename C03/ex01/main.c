#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1 = "ab'\x8f'cd";
	char	*s2 = "ab'\x8f'cc";

	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 7));
	printf("%d\n", strncmp(s1, s2, 7));
	
	return (0);
}
