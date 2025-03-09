/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:53:18 by omakbas           #+#    #+#             */
/*   Updated: 2024/10/24 20:35:49 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] != '\0')
		&& ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && (str [i] >= '0' && str [i] <= '9'))
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
