#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	char a[] = "-21474836495";
	char b[] = "Z";
	int *x;
	//printf("%s \n", a);
	//printf("%s \n", ft_memset(a + 1, 66, 1));
	//printf("%d %s\n", ft_strlcpy(a, b, 6), a);
	//printf("%lu %s", strlcpy(a, b, 6), a);
	//printf("%s \n", bzero(a, 2));
	//bzero(a, 0);
	//printf("%s", a);
	//ft_bzero(a, 2);
	//ft_memset(a, 65, 1);
	//printf("%c", toupper(b));
	//memcpy(a, b, 0);
	//ft_memccpy(a, b, 'Z', -3);
	//memmove(a, b, 10);
	//printf("%lu\n", strlcat(a, b, 2));
	//printf("%d\n", ft_strncmp(a, b, 10));
	//x = ft_strlen(a);
	printf("%p\n", x);
	printf("%p\n", x = (int*)ft_calloc(0, 0));
	x[2] = 4;
	printf("%p\n %d", x, x[0]);
	//printf ("%p\n", x);
	//printf("%s\n", ft_strnstr(a, b, 5));
	//printf("%d\n", strlcpy(a, b, 1));
	//printf("%s\n", a);
	//printf("%s", a);
	return(0);
}
