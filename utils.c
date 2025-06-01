/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:30:40 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/22 14:51:10 by omakbas          ###   ########.fr       */
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
	(void) msg;
	write(STDERR_FILENO, "Error\n", 6);
	exit (1);
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
		if (ft_atoi(mat[i]) > INT_MAX || ft_atoi(mat[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
