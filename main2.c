#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	char a[] = "Hola que pasa";
	char *b;
	//int *x;
	//printf("%s \n", ft_memset(a, 66, 1));
	//printf("%d %s\n", ft_strlcpy(a, b, 6), a);
	//printf("%lu %s", strlcpy(a, b, 6), a);
	//printf("%s \n", bzero(a, 2));
	//ft_bzero(a, 2);
	//printf("%c", toupper(b));
	//memcpy(a, b, 0);
	//ft_memccpy(a, b, 'Z', -3);
	//memmove(a, b, 10);
	//printf("%lu\n", strlcat(a, b, 2));
	//printf("%d\n", ft_strncmp(a, b, 10));
	//x = ft_strlen(a);
	//printf("%p\n", x);
	//printf("%p\n", x = (int*)ft_calloc(2, 4));
	//x[2] = 4;
	//printf("%p\n%d\n", x, x[2]);
	//printf ("%p\n", x);
	//printf("%s\n", ft_strnstr(a, b, 5));
	//printf("%d\n", strlcpy(a, b, 1));
	b = ft_strdup(a);
	printf("%s\n", b);
	return(0);
}
