/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:53:18 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/14 16:13:14 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(char *str)
{
	long	i;
	int		sign;
	long	result;

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
	return (result * sign);
}
