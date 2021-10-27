#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurence;
	size_t	len;
	int		i;

	i = 0;
	occurence = NULL;
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + len);
	while (s[i])
	{
		if (s[i] == (char) c)
			occurence = (char *)s + i;
		i++;
	}
	return (occurence);
}
