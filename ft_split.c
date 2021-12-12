/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyalexan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:27:29 by kyalexan          #+#    #+#             */
/*   Updated: 2021/12/12 12:31:41 by kyalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	not_c;

	i = 0;
	not_c = 0;
	while (*str)
	{
		if (*str != c && not_c == 0)
		{
			not_c = 1;
			i++;
		}
		else if (*str == c)
			not_c = 0;
		str++;
	}
	return (i);
}

static int	count_word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static void	*free_all(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = (char **) malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_substr((char *)s, 0, count_word_len((char *)s, c));
		if (!tab[i])
			return (free_all(tab, i));
		s = s + count_word_len((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
