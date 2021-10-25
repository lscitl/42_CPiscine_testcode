#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[] = "Heloloo Woloooloooo";
	char	s2[] = "loo";
	char	s3[] = "Heloloo";
	char	s4[] = "loooo";
	char	s5[] = "";
	char	*s6 = 0;

	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));

	printf("%s\n", ft_strstr(s1, s3));
	printf("%s\n", strstr(s1, s3));
	
	printf("%s\n", ft_strstr(s3, s4));
	printf("%s\n", strstr(s3, s4));
	
	printf("%s\n", ft_strstr(s4, s5));
	printf("%s\n", strstr(s4, s5));

	printf("%s\n", ft_strstr(s6, s4));
	printf("%s\n", strstr(s6, s4));
}
