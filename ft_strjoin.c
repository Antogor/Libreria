
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	size_t	total;
	int		l;

	total = ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	new = malloc(sizeof(char) * total);
	if (new == 0)
		return (NULL);
	l = 0;
	while (total--)
	{
		new[l] = *s1++;
		if (*s1 == '\0')
		{
			while (*s2++)
			{
				new[l] = *s2;
				l++;
			}
			break ;
		}
		l++;
	}
	new[l] = '\0';
	return (new);
}
