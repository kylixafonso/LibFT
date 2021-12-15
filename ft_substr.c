/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:28:02 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/15 14:01:02 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	s_len;

	s_len = (unsigned int) ft_strlen(s);
	len = ft_min(len, (int) s_len);
	if (!s)
		return (NULL);
	if (start < s_len)
	{
		substr = (char *) ft_calloc(sizeof(char), len + 1);
		if (!substr)
			return (NULL);
		ft_memcpy(substr, s + start, len);
	}
	else
	{
		substr = (char *) ft_calloc(sizeof(char), 1);
		if (!substr)
			return (NULL);
	}
	return (substr);
}
