/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rules.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:31:24 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/14 18:31:27 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_node **stk_a)
{
	t_node	*prev;
	t_node	*last;

	if (!*stk_a || !(*stk_a)->next)
		return ;
	prev = NULL;
	last = *stk_a;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stk_a;
	*stk_a = last;
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_node **stk_b)
{
	t_node	*prev;
	t_node	*last;

	if (!*stk_b || !(*stk_b)->next)
		return ;
	prev = NULL;
	last = *stk_b;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stk_b;
	*stk_b = last;
	ft_printf("rrb\n");
}

void	rrr(t_node **stk_a, t_node **stk_b)
{
	reverse_rotate_a(stk_a);
	reverse_rotate_b(stk_b);
}
