#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)

{
	char	s1[] = "asdf";
	char	s2[] = "Hello";

	ft_strncat(s1, s2, 5);
	printf("%s", s1);
	return (0);
}
