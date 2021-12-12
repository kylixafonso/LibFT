/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:20 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 13:00:02 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	if (dest != NULL || src != NULL)
	{
		temp = malloc(sizeof(unsigned char) * (n + 1));
		if (temp)
		{
			ft_memcpy(temp, src, n);
			temp[n] = '\0';
			ft_memcpy(dest, temp, n);
			free(temp);
		}
	}
	return (dest);
}
