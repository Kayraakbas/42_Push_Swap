/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:00:37 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 20:02:09 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*str;
	unsigned char	letter;
	int				len;

	len = 0;
	str = s;
	letter = c;
	while (str[len])
	{
		if (str[len] == letter)
			return ((char *) &str[len]);
		len++;
	}
	if (letter == '\0')
		return ((char *)&str[len]);
	return (0);
}
