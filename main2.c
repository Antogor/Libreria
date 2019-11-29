#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	char a[] = "zzzzzz";
	//t_list *elemen;
	//int l = 42;
	//int q;
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
	//printf("%d\n", ft_atoi("99999999999999999999999999"));
	//printf("%d\n", atoi(a));
	//printf("%s\n", ft_strdup(a));
	//printf("%s\n", b);
	//char *c = ft_strjoin(a, b);
	//char *c = ft_substr(a, 4, 3);
	//elemen = ft_lstnew(&l);
	//char *c = ft_strtrim(a, " ");
	//char *c = ft_strtrim(b, " ");
	char **c = ft_split(a, '\0');
	//char *c = ft_itoa(-2147483649);
	//char *d = itoa(2147483648);
	printf("%s\n", c[0]);
	//printf("%s\n", d);
	//printf("%d\n", (int)elemen->content);
	//ft_putnbr_fd(-2147483648, 1);
	return(0);
}

/*t_list *l = lstnew(strdup("nyacat"));
	t_list *n = lstnew(strdup("OK"));

	ft_lstadd_front(&l, n);
	if (l == n && !strcmp(l->content, "OK"))
	{
		free(l->next);
		free(l);
		exit(TEST_SUCCESS);
	}
	free(l->next);
	free(l);
	exit(TEST_FAILED);*/