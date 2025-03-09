/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:23:35 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 00:21:56 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*arr;
	int		i;

	len = ft_strlen(s);
	arr = (char *) malloc(len * sizeof(char));
	i = 0;
	while (i < len)
	{
		arr[i] = s[i];
		i++;
	}
	return (arr);
}
