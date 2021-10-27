#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*n_str;
	int		sign;
	int		len;
	int		i;

	i = 0;
	sign = 0;
	if (n == -2147483648)
	{
		n_str = malloc(sizeof(char) * 13);
		if (n_str)
		{
			ft_strncpy(n_str, "-2147483648", 12);
			n_str[12] = '\0';
			return (n_str);
		}
		else
			return (NULL);
	}
	len = intlen(n);
	n_str = malloc(sizeof(char) * (len + 1));
	if (n_str)
	{
		if (n < 0)
		{
			sign = 1;
			n = -n;
		}
		while (i < len)
		{
			n_str[len - i - 1] = n % 10 + '0';
			n /= 10;
			i++;
		}
		if (sign == 1)
		{
			n_str[0] = '-';
		}
		n_str[len] = '\0';
		return (n_str);
	}
	else
		return (NULL);
}
