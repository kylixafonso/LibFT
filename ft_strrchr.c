/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:57 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 12:32:16 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurence;
	size_t	len;
	int		i;

	i = 0;
	occurence = NULL;
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + len);
	while (s[i])
	{
		if (s[i] == (char) c)
			occurence = (char *)s + i;
		i++;
	}
	return (occurence);
}
