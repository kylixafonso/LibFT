#include "libft.h"

char	*strstr(const char *haystack, const char *needle)
{
	int	i;
	int	needle_len;

	i = 0;
	needle_len = (int) ft_strlen(needle);
	while (haystack[i])
	{
		if (!strncmp(haystack, needle, needle_len))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
