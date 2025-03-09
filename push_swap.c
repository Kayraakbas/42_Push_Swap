/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:48:55 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 00:33:54 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stacks(node *stack_a, node *stack_b)
{
    ft_printf("Stack A:\n");
    print_list(stack_a);

    ft_printf("Stack B:\n");
    print_list(stack_b);

    ft_printf("-----\n");
}

char	**get_argument_matrix(int argc, char **argv)
{
	char **mat;

	if (argc == 2)
	{
		if (contains_space(argv[1]))
		{
			mat = ft_split(argv[1], ' ');
			if (!mat || check_arg_format(mat))
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
	}
	else
	{
		mat = &argv[1];
		if (check_arg_format(mat))
			exit_error("Error");
	}
	return (mat);
}

void	process_argument_matrix(char **mat, int argc, node **stack_a)
{
	int i = 0;

	while (mat[i])
	{
		int val = ft_atoi(mat[i]);
		push(stack_a, val);

		if (argc == 2)
			free(mat[i]);
		i++;
	}
	if (argc == 2)
		free(mat);
	index_stack(stack_a);
}

void	parse_arguments(int argc, char **argv, node **stack_a)
{
	char **mat;

	mat = get_argument_matrix(argc, argv);
	process_argument_matrix(mat, argc, stack_a);
}

void cleanup(node **stack_a, node **stack_b)
{
    free_list(stack_a);
    free_list(stack_b);
}


int main(int argc, char **argv)
{
    if (argc == 1)
        exit(0);

    node *stack_a = NULL;
    node *stack_b = NULL;
    parse_arguments(argc, argv, &stack_a);
    sort_stack(&stack_a, &stack_b);
    cleanup(&stack_a, &stack_b);
    return 0;
}
