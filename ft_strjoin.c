/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:34 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/15 12:23:33 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_string;

	if (s1 && s2)
	{
		len = ft_strlen(s1);
		len += ft_strlen(s2);
		new_string = malloc(sizeof(char) * (len + 1));
		if (!new_string)
			return (NULL);
		ft_bzero(new_string, len + 1);
		ft_strcat(new_string, s1);
		ft_strcat(new_string, s2);
		return (new_string);
	}
	return (NULL);
}
