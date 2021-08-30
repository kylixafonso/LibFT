#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buff;

	buff = s;
	i = 0;
	while (i < n)
	{
		buff[i] = '\0';
		i++;
	}
}
