/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:11:15 by omakbas           #+#    #+#             */
/*   Updated: 2024/10/24 20:40:18 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_separator(char c, char ch)
{
	if (c == ch || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], c) == 1)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char *from, char charset)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static void	write_split(char **split, char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (!split[word])
				return ;
			write_word(split[word], &str[i], charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;

	if (!s)
		return (NULL);
	words = count_words((char *)s, c);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (!matrix)
		return (NULL);
	matrix[words] = 0;
	write_split(matrix, (char *)s, c);
	return (matrix);
}
