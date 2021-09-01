#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char		*new_string;

	len = ft_strlen(s1);
	len += ft_strlen(s2);
	new_string = calloc(sizeof(char), (len + 1));
	if (new_string)
	{
		strcat(new_string, s1);
		strcat(new_string, s2);
	}
	return (new_string);
}
