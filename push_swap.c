/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:32:14 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/22 14:51:33 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_argument_matrix(char **argv)
{
	char	**mat;

	if (contains_space(argv[1]))
	{
		mat = ft_split(argv[1], ' ');
		if (!mat || check_arg_format(mat)
			|| (argv[1][0] == ' ' && argv[1][1] == '\0'))
			handle_error_and_free_mat(mat);
	}
	else
	{
		mat = malloc(sizeof(char *) * 2);
		if (!mat)
			exit_error("Error");
		mat[0] = ft_strdup(argv[1]);
		mat[1] = NULL;
		if (check_arg_format(mat))
		{
			free(mat[0]);
			free(mat);
			exit_error("Error");
		}
	}
	return (mat);
}

void	process_argument_matrix(char **mat, int argc, t_node **stack_a)
{
	int		i;
	long	val;

	i = 0;
	while (mat[i])
	{
		val = ft_atoi(mat[i]);
		push(stack_a, val);
		if (argc == 2)
			free(mat[i]);
		i++;
	}
	if (argc == 2)
		free(mat);
	index_stack(stack_a);
}

void	parse_arguments(int argc, char **argv, t_node **stack_a)
{
	char	**mat;

	if (argc == 2)
		mat = get_argument_matrix(argv);
	else
	{
		mat = &argv[1];
		if (check_arg_format(mat))
			exit_error("Error");
	}
	process_argument_matrix(mat, argc, stack_a);
}

void	cleanup(t_node **stack_a, t_node **stack_b)
{
	free_list(stack_a);
	free_list(stack_b);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc == 1)
		exit(0);
	stack_a = NULL;
	stack_b = NULL;
	is_argv_null(argv);
	parse_arguments(argc, argv, &stack_a);
	if (sorted(&stack_a))
		exit (0);
	sort_stack(&stack_a, &stack_b);
	cleanup(&stack_a, &stack_b);
	return (0);
}
