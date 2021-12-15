/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:14 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/15 11:49:06 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*buff;
	unsigned char	*dest_;

	i = 0;
	buff = (unsigned char *)src;
	dest_ = (unsigned char *)dest;
	while (i < n)
	{
		dest_[i] = buff[i];
		if (buff[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
