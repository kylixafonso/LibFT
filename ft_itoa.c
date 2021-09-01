#include <string.h>
#include <stdlib.h>
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

#include <stdio.h>
char *ft_itoa(int n)
{
	char	*n_str;
	int	sign;
	int	len;
	int	i;

	i = 0;
	sign = 0;
	if (n == -2147483648)
	{
		n_str = malloc(sizeof(char) * 13);
		ft_strncpy(n_str, "-2147483648", 12);
		n_str[12] = '\0';
		return (n_str);
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
/*
int	main(void)
{
	char	*str = ft_itoa(-2147483648);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
