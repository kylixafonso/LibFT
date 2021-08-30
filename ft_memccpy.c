#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;
	unsigned char	*dest_;

	i = 0;
	buff = (unsigned char *)src;
	dest_ = (unsigned char *)dest;
	while (i < n)
	{
		if (buff[i] == (unsigned char) c)
			return (buff + i + 1);
		dest_[i] = buff[i];
		i++;
	}
	return (NULL);
}
