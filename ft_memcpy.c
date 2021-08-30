#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*buff;
	unsigned char	*dest_;

	i = 0;
	buff = (unsigned char *)src;
	dest_ = (unsigned char *)dest;
	while (i < n)
	{
		dest_[i] = buff[i];
		i++;
	}
	return (dest);
}
