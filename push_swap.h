/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:28:38 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/20 20:30:07 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_node
{
	int				val;
	int				index;
	struct s_node	*next;
}	t_node;

void	swap_a(t_node **stk_a);
void	swap_b(t_node **stk_b);
void	ss(t_node **stk_a, t_node **stk_b);
void	push_a(t_node **stk_a, t_node **stk_b);
void	push_b(t_node **stk_b, t_node **stk_a);
void	rotate_a(t_node **stk_a);
void	rotate_b(t_node **stk_b);
void	rr(t_node **stk_a, t_node **stk_b);
void	reverse_rotate_a(t_node **stk_a);
void	reverse_rotate_b(t_node **stk_b);
void	rrr(t_node **stk_a, t_node **stk_b);

void	handle_error_and_free_mat(char **mat);
int		is_valid_number(const char *str);
int		contains_space(const char *str);
int		check_arg_format(char **mat);
void	push(t_node **stk, int val);
void	free_list(t_node **lst);
void	print_list(t_node *lst);
int		ft_lstsize(t_node *head);
void	exit_error(const char *msg);
int		sorted(t_node **head);
int		find_biggest(t_node *head);
void	check_duplicates(t_node **stack);
void	is_argv_null(char **argv);

void	radix_sort(t_node **stack_a, t_node **stack_b);
int		max_bits(t_node **stack);
void	index_stack(t_node **stack);
void	print_stacks(t_node *stack_a, t_node *stack_b);
void	sort_stack(t_node **stack_a, t_node **stack_b);

#endif
