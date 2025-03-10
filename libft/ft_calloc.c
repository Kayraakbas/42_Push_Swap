/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:05:11 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 20:44:11 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	void			*arr;
	size_t			i;

	total_size = count * size;
	if (total_size == 0)
		total_size = 1;
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)arr)[i] = 0;
		i++;
	}
	return (arr);
}
