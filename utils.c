/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:29:00 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 22:55:52 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error_and_free_mat(char **mat)
{
	int	i;

	i = 0;
	if (mat)
	{
		while (mat[i])
		{
			free(mat[i]);
			i++;
		}
		free(mat);
	}
	exit_error("Error");
}

void	exit_error(const char *msg)
{
	ft_printf("%s\n", msg);
	exit(EXIT_FAILURE);
}

int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	contains_space(const char *str)
{
	while (*str)
	{
		if ((*str == ' ') || (*str >= '\t' && *str <= '\r'))
			return (1);
		str++;
	}
	return (0);
}

int	check_arg_format(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
	{
		if (!is_valid_number(mat[i]))
			return (1);
		i++;
	}
	return (0);
}
