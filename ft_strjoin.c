/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:34 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 14:26:36 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		bzero(new_string, len + 1);
		strcat(new_string, s1);
		strcat(new_string, s2);
		return (new_string);
	}
	return (NULL);
}
