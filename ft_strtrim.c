/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:28:01 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 15:25:42 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_out_set(char const *s, char const *set)
{
	int	ctr;
	int	i;

	ctr = 0;
	i = 0;
	while (s[i])
	{
		if (!in_set(s[i], set))
			ctr++;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		j;
	int		i;

	if (s1 && set)
	{
		new = (char *) malloc(sizeof(char) * count_out_set(s1, set));
		if (!new)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[i])
		{
			if (!in_set(s1[i], set))
			{
				new[j] = s1[i];
				j++;
			}
			i++;
		}
		new[j] = '\0';
		return (new);
	}
	return (NULL);
}
