#include <string.h>
#include <unistd.h>
#include "libft.h"

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else
	{
		while (n)
		{
			len++;
			n /= 10;
		}
	}
	return (len);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	n_str[12];
	int		len;
	int		i;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		len = intlen(n);
		i = 0;
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		while (i < len)
		{
			n_str[len - i - 1] = n % 10 + '0';
			n /= 10;
			i++;
		}
	}
	write(fd, n_str, len);
}
