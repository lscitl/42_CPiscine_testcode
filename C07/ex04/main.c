#include<stdio.h>
#include<stdlib.h>

char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
    char    *tmp;

	tmp = ft_convert_base("\n\f+dsfse   +-+-ddfsas", "asdf", "0123");
	printf("%s\n", tmp);
	free(tmp);
	return (0);
}
