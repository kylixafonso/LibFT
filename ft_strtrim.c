#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		j;
	size_t		k;

	j = ft_strlen(s1);
	i = 0;
	k = 0;
	while (s1[i] && in_set(s1[i], set))
		i++;
	while (j > i && in_set(s1[j - 1], set))
		j--;
	str = (char *) malloc(sizeof(char *) * (j - i + 1));
	if (str)
		while (i < j)
			str[k++] = s1[i++];
	else
		return (NULL);
	str[k] = '\0';
	return (str);
}
