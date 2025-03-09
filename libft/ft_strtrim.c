/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:14:10 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 00:24:29 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

static int	get_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	return (start);
}

static int	get_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen((char *)s1) - 1;
	while (end >= 0 && is_in_set(s1[end], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimmed_str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	trimmed_str = (char *)malloc((len + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed_str[i] = s1[start + i];
		i++;
	}
	trimmed_str[len] = '\0';
	return (trimmed_str);
}
