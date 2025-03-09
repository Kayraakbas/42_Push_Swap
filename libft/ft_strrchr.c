/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:37:27 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 00:08:31 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	letter;
	int				len;

	len = ft_strlen(s);
	str = (char *) s;
	letter = c;
	while (len >= 0)
	{
		if (str[len] == letter)
			return (&str[len]);
		len--;
	}
	return (NULL);
}
