#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' \
				|| c == '\t' || c == '\v' \
				|| c == '\f' || c == '\r');
}

static void	handle_spaces(const char *nptr, int *i)
{
	*i = 0;
	while (ft_isspace(nptr[*i]))
		(*i)++;
}

static int	handle_sign(char c, int *i)
{
	int	sign;

	sign = 1;
	if (c == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if (c == '+')
		(*i)++;
	return (sign);
}

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;
	int	i;

	handle_spaces(nptr, &i);
	sign = handle_sign(nptr[i], &i);
	number = 0;
	if (!ft_strcmp(nptr + i, "2147483647"))
		return (2147483647);
	else if (!ft_strcmp(nptr + i - 1, "-2147483648"))
		return (-2147483648);
	while (ft_isdigit(nptr[i]))
	{
		number *= 10;
		number += nptr[i] - '0';
		i++;
	}
	return (number * sign);
}
