/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:28:02 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 15:09:50 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		reallen;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
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
