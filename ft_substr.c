#include "libft.h"
#include <stdlib.h>

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = ft_calloc((len + 1), sizeof(char));
	if (substr && start < ft_strlen(s))
		ft_strncpy(substr, s + start, len);
	return (substr);
}
