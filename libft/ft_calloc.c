/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:05:11 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 00:23:26 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			n;
	size_t			i;
	size_t			j;
	unsigned char	*arr;

	j = 0;
	i = 0;
	n = count;
	arr = malloc(count * size);
	while (i < n)
	{
		j = 0;
		while (j < size)
		{
			arr[i + j] = 0;
			j++;
		}
		i += size;
	}
	return ((void *)arr);
}
