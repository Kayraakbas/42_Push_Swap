/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:08:05 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 22:08:20 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to(t_node **stack_from, t_node **stack_to)
{
	t_node	*tmp;

	if (stack_from == NULL || *stack_from == NULL)
		return ;
	tmp = *stack_from;
	*stack_from = (*stack_from)->next;
	if (stack_to == NULL)
		*stack_to = tmp;
	else
	{
		tmp->next = *stack_to;
		*stack_to = tmp;
	}
}

void	push_a(t_node **stack_a, t_node **stack_b)
{
	push_to(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	push_to(stack_a, stack_b);
	write(1, "pb\n", 3);
}
