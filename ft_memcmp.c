#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*buff1;
	unsigned char	*buff2;

	i = 0;
	buff1 = (unsigned char *)s1;
	buff2 = (unsigned char *)s2;
	while (i < n)
	{
		if (buff1[i] != buff2[i])
			return (buff1[i] - buff2[i]);
		i++;
	}
	return (0);
}
