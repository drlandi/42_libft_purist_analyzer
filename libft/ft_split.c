/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 19:07:16 by dlandi            #+#    #+#             */
/*   Updated: 2026/06/17 19:17:17 by dlandi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char delimiter)
{
	size_t	word_count;
	size_t	string_index;
	int		inside_word;

	word_count = 0;
	string_index = 0;
	inside_word = 0;
	while (s[string_index] != '\0')
	{
		if (s[string_index] != delimiter && inside_word == 0)
		{
			inside_word = 1;
			word_count++;
		}
		else if (s[string_index] == delimiter)
			inside_word = 0;
		string_index++;
	}
	return (word_count);
}

static void	free_allocated_array(char **array, size_t allocated_rows)
{
	size_t	row_index;

	row_index = 0;
	while (row_index < allocated_rows)
	{
		free(array[row_index]);
		row_index++;
	}
	free(array);
}

static char	**fill_split_array(char **split, char const *s, char delimiter)
{
	size_t	string_index;
	size_t	row_index;
	size_t	word_start;

	string_index = 0;
	row_index = 0;
	while (s[string_index] != '\0')
	{
		while (s[string_index] == delimiter)
			string_index++;
		if (s[string_index] == '\0')
			break ;
		word_start = string_index;
		while (s[string_index] != '\0' && s[string_index] != delimiter)
			string_index++;
		split[row_index] = ft_substr(s, word_start, string_index - word_start);
		if (split[row_index] == NULL)
		{
			free_allocated_array(split, row_index);
			return (NULL);
		}
		row_index++;
	}
	split[row_index] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	size_t	total_words;

	if (s == NULL)
		return (NULL);
	total_words = count_words(s, c);
	split_array = (char **)malloc((total_words + 1) * sizeof(char *));
	if (split_array == NULL)
		return (NULL);
	return (fill_split_array(split_array, s, c));
}
