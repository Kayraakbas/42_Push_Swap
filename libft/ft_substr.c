/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:37:31 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 00:11:35 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	j;

	if (!s || start >= ft_strlen(s))
	{
		arr = (char *)malloc(1);
		if (!arr)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	arr = (char *)malloc((len + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
		arr[j++] = s[i++];
	arr[j] = '\0';
	return (arr);
}
