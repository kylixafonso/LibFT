/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:18 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 12:59:15 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*buff;
	unsigned char	*dest_;

	if (dest != NULL || src != NULL)
	{
		i = 0;
		buff = (unsigned char *)src;
		dest_ = (unsigned char *)dest;
		while (i < n)
		{
		dest_[i] = buff[i];
			i++;
		}
	}
	return (dest);
}
