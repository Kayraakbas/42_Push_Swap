/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:03:30 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/24 20:37:54 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	letter;

	letter = c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == letter)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
