#include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	s1[] = "Heloloo World!";
	char	s2[] = "loo";

	printf("%s", ft_strstr(s1, s2));
}
