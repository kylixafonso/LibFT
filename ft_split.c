#include <stdlib.h>
#include "libft.h"

static int	count_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	count_split(char const *s, char c)
{
	int	is_split;
	int	ctr;
	int	i;

	i = 0;
	ctr = 0;
	if (s[0] == c)
		is_split = 1;
	else
		is_split = 0;
	while (s[i])
	{
		if (s[i] == c && !is_split)
		{
			ctr++;
			is_split = 1;
		}
		else if (s[i] != c)
			is_split = 0;
		i++;
	}
	return (ctr);
}

void	*free_all(char **s_array)
{
	int	i;

	i = 0;
	while (s_array[i][0])
	{
		free(s_array[i]);
		i++;
	}
	free(s_array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**s_array;
	int		is_split;
	int		ctr;
	int		len;
	int		i;

	s_array = (char **) malloc(sizeof(char *) * (count_split(s, c) + 2));
	if (s_array)
	{
		is_split = 1;
		i = 0;
		ctr = 0;
		while (s[i])
		{
			if (s[i] != c && s[i] != '\0' && is_split)
			{
				len = count_len(s + i, c) + 1;
				s_array[ctr] = (char *) malloc(sizeof(char) * (len));
				if (s_array[ctr])
				{
					ft_strlcpy(s_array[ctr], s + i, len);
					is_split = 0;
					ctr++;
				}
				else
					return (free_all(s_array));
			}
			else if (s[i] == c)
				is_split = 1;
			i++;
		}
		s_array[ctr] = NULL;
		return (s_array);
	}
	else
		return (NULL);
}
