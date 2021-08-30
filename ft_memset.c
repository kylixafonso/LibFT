#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;

	i = 0;
	buff = s;
	while (i < n)
	{
		buff[i] = c;
		i++;
	}
	return (s);
}
