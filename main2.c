#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	char a[] = "";
	char b[] = "";
	//int *x;
	//printf("%s \n", ft_memset(a, 66, 1));
	printf("%lu %s\n", ft_strlcpy(a, b, 2), a);
	//printf("%u\n", strlcpy(a, b, 3));
	//printf("%s \n", bzero(a, 2));
	//ft_bzero(a, 2);
	//printf("%c", toupper(b));
	//memccpy(a, b, 'a', 2);
	//ft_memccpy(a, b, 'a', 2);
	//memmove((void*)0, (void*)0, 5);
	//ft_memmove((void*)0, (void*)0, 5);
	//printf("%lu\n", strlcat(a, b, 2));
	//printf("%d\n", strncmp(a, b, 0));
	//printf("%d\n", ft_strncmp(a, b, 0));
	//x = ft_strlen(a);
	//printf("%p\n", x);
	//printf("%p\n", x = (int*)ft_calloc(2, 4));
	//x[2] = 4;
	//printf("%p\n%d\n", x, x[2]);
	//printf ("%p\n", x);
	//printf("%s\n", ft_strnstr(a, b, 5));
	//printf("%lu\n", strlcpy(a, b, 0));
	//printf("%lu\n", strlcpy(a, b, 0));
	//b = substr(a, 4, 3);
	printf("%s\n", a);
	return(0);
}
