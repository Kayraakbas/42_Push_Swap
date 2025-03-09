/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:04:34 by omakbas           #+#    #+#             */
/*   Updated: 2024/10/25 00:08:40 by kayraakbas       ###   ########.fr       */
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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;

	if (!s || !f)
		return NULL;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char)); 
	if (!str)
		return NULL;

	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]); 
		i++;
	}
	str[i] = '\0';

	return str;
}
