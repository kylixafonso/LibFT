#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*new_string;

	len = ft_strlen(s);
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string)
	{
		ft_strcpy(new_string, s);
		new_string[len] = '\0';
	}
	return (new_string);
}
