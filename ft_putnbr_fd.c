#include <string.h>
#include <unistd.h>
#include "libft.h"

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

void	ft_putnbr_fd(int n, int fd)
{
	char	n_str[12];
	int	sign;
	int	len;
	int	i;

	i = 0;
	sign = 0;
	if (n == -2147483648)
	{
		ft_strncpy(n_str, "-2147483648", 12);
		return ;
	}
	len = intlen(n);
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
	while (i < 12)
	{
		n_str[i] = '\0';
		i++;
	}
	write(fd, n_str, ft_strlen(n_str));
}
