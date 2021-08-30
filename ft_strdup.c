#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s)
{
	int		len;
	char	*new_string;

	len = ft_strlen(s);
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string)
		ft_strcpy(new_string, s);
	new_string[len] = '\0';
	return (new_string);
}
