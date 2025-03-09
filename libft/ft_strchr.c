/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:00:37 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/24 20:40:35 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	letter;
	int				len;

	len = 0;
	str = (char *) s;
	letter = c;
	while (str[len])
	{
		if (str[len] == letter)
			return (&str[len]);
		len++;
	}
	return (NULL);
}
