#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i] || (s[i - 1] && i >= 1))
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
