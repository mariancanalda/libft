#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	//char str[5] = "HOLA";
	//int i;

	//i = ft_strlen(str);
	//printf("%d\n", i);
	char **split;

	split = malloc(1);
	// printf("%p\n", split);
	split = ft_split(argv[1], ' ');
	system("leaks -q a.out");
	return(0);
}
