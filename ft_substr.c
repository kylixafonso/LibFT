#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc(sizeof(char) * (len + 1));
	if (substr)
		ft_strncpy(substr, s + start, len);
	return (substr);
}
