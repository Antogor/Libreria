#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	char a[] = "H o la";
	int l;
	int q;
	//char b[] = "lorem \n ipsum \t dolor \n sit \t amet";
	//int *x;
	//printf("%s \n", ft_memset(a, 66, 1));
	//printf("%lu %s\n", ft_strlcpy(a, b, 2), a);
	//printf("%lu %s\n", strlcpy(a, b, 2), a);
	//printf("%lu %s\n", strlcat(a, b, 10), a);
	//printf("%lu %s\n", ft_strlcat(a, b, 5), a);
	//printf("%s \n", bzero(a, 2));
	//ft_bzero(a, 2);
	//printf("%c", toupper(b));
	//memccpy(a, b, 'a', 2);
	//ft_memccpy(a, b, 'a', 2);
	//memmove((void*)0, (void*)0, 5);
	//ft_memmove((void*)0, (void*)0, 5);
	//printf("%lu %s\n", ft_strlcat(a, b, 60), a);
	//printf("%d\n", strncmp(a, b, 0));
	//printf("%d\n", ft_strncmp(a, b, 0));
	//x = ft_strlen(a);
	//printf("%p\n", x);
	//printf("%p\n", x = (int*)ft_calloc(2, 4));
	//x[2] = 4;
	//printf("%p\n%d\n", x, x[2]);
	//printf ("%p\n", x);
	//printf("%s\n", ft_strnstr(a, b, 10));
	//b = ft_substr(a, 0, 6);
	//printf("%d\n", ft_atoi(a));
	//printf("%d\n", atoi(a));
	//printf("%s\n", ft_strdup(a));
	//printf("%s\n", b);
	//char *c = ft_strjoin(a, b);
	//char *c = ft_substr(a, 4, 3);
	//char *c = ft_strtrim(a, "l ");
	//char *c = ft_strtrim(b, " ");
	//char **c = ft_split(a, 'z');
	char *c = ft_itoa(-623);
	printf("%s\n", c);
	//ft_putnbr_fd(-2147483648, 1);
	return(0);
}
