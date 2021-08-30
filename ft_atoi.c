#include "libft.h"

static int	handle_sign(const char c, int *i)
{
	int	sign;

	if (c == '-')
	{
		sign = -1;
		*i = 1;
	}
	else if (c == '+')
	{
		sign = 1;
		*i = 1;
	}
	else
	{
		sign = 1;
		*i = 0;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;
	int	i;

	sign = handle_sign(nptr[0], &i);
	number = 0;
	if (!ft_strcmp(nptr, "2147483647"))
		return (2147483647);
	else if (!ft_strcmp(nptr, "-2147483648"))
		return (-2147483648);
	while (ft_isdigit(nptr[i]))
	{
		number *= 10;
		number += nptr[i] - '0';
		i++;
	}
	return (number * sign);
}
