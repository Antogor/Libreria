#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	char a[] = "hola";
	char b[] = " que tal";
	//int *x;
	//printf("%s \n", ft_memset(a, 66, 1));
	//printf("%lu %s\n", ft_strlcpy(a, b, 2), a);
	//printf("%lu %s\n", strlcpy(a, b, 2), a);
	//printf("%lu %s\n", strlcat(a, b, 4), a);
	//printf("%lu %s\n", ft_strlcat(a, b, 7), a);
	//printf("%s \n", bzero(a, 2));
	//ft_bzero(a, 2);
	//printf("%c", toupper(b));
	//memccpy(a, b, 'a', 2);
	//ft_memccpy(a, b, 'a', 2);
	//memmove((void*)0, (void*)0, 5);
	//ft_memmove((void*)0, (void*)0, 5);
	//printf("%lu\n", ft_strlcat(a, b, 10));
	//printf("%d\n", strncmp(a, b, 0));
	//printf("%d\n", ft_strncmp(a, b, 0));
	//x = ft_strlen(a);
	//printf("%p\n", x);
	//printf("%p\n", x = (int*)ft_calloc(2, 4));
	//x[2] = 4;
	//printf("%p\n%d\n", x, x[2]);
	//printf ("%p\n", x);
	//printf("%s\n", ft_strnstr(a, b, 10));
	//b = ft_substr(a, 4, 1);
	//printf("%d\n", ft_atoi(a));
	//printf("%d\n", atoi(a));
	//printf("%s\n", ft_strdup(a));
	//printf("%s\n", b);
	char *c = ft_strjoin(a, b);
	printf("%s\n", c);
	return(0);
}
