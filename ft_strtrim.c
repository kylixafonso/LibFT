/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:28:01 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/15 14:47:15 by kyalexan         ###   ########.fr       */
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

static int	find_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start])
	{
		if (!in_set(s1[start], set))
			break ;
		start++;
	}
	return (start);
}

static int	find_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1);
	while (s1[end - 1])
	{
		if (!in_set(s1[end - 1], set) || end == 1)
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		start;
	int		end;

	start = find_start(s1, set);
	end = find_end(s1, set);
	if (start > end)
	{
		s = malloc(sizeof(char));
		if (!s)
			return (NULL);
		*s = '\0';
		return (s);
	}
	else
	{
		s = malloc(sizeof(char) * (end - start + 1));
		if (!s)
			return (NULL);
		ft_memcpy(s, s1 + start, end - start);
		s[end - start] = '\0';
	}
	return (s);
}
