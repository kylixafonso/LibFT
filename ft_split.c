#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	is_word;
	int	count;
	int	i;

	i = 0;
	is_word = 0;
	while (s[i])
	{
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (count);
}

static int	sep_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	*free_all(char	**string_array)
{
	int	i;

	i = 0;
	while (string_array[i][0])
	{
		free(string_array[i]);
		i++;
	}
	free(string_array);
	return (NULL);
}

//#include <stdio.h>
char	**ft_split(char const *s, char c)
{
	char	**string_array;
	int	total_len;
	int	len;
	int	count;
	int	i;

	i = 0;
	total_len = 0;
	while (s[total_len] == c)
		total_len++;
	count = count_words(s, c);
	string_array = (char **)malloc(sizeof(char *) * (count + 1));
	if (string_array)
	{
		while (i < count && total_len < (int) ft_strlen(s))
		{
			len = sep_len(s + total_len, c);
			string_array[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (string_array[i])
				strncpy(string_array[i], s + total_len, len);
			else
				return (free_all(string_array));
			string_array[i][len] = '\0';
			total_len += len;
			while (s[total_len] == c)
				total_len++;
			i++;
		}
	}
	else
		return (NULL);
	string_array[i] = "\0";
	return (string_array);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**s_array = ft_split("justtesting", 't');
	int	i = 0;
	while (s_array[i][0])
	{
		printf("%s\n", s_array[i]);
		i++;
	}
	free_all(s_array);
	return (0);
}
*/
