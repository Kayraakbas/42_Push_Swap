/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:37:27 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 19:23:28 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
