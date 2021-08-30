#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buff;
	size_t			i;

	buff = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buff[i] == (unsigned char)c)
			return (buff + i);
		i++;
	}
	return (NULL);
}
