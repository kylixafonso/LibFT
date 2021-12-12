/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:26:52 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 14:22:23 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	fit_number_in_string(long n, char *n_str, int len)
{
	int	sign;
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	while (i < len)
	{
		n_str[len - i - 1] = n % 10 + '0';
		i++;
		n /= 10;
	}
	if (sign == 1)
		n_str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*n_str;
	long	long_n;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	long_n = n;
	len = number_len(n);
	n_str = (char *) malloc(sizeof(char) * len + 1);
	if (!n_str)
		return (NULL);
	fit_number_in_string(long_n, n_str, len);
	n_str[len] = '\0';
	return (n_str);
}
