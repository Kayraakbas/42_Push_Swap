/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:30:47 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/14 18:30:50 by omakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_node **stk_a)
{
	t_node	*first;
	t_node	*second;

	if (*stk_a == NULL || (*stk_a)->next == NULL)
		return ;
	first = *stk_a;
	second = (*stk_a)->next;
	first->next = second->next;
	second->next = first;
	*stk_a = second;
	ft_printf("sa\n");
}

void	swap_b(t_node **stk_b)
{
	t_node	*first;
	t_node	*second;

	if (*stk_b == NULL || (*stk_b)->next == NULL)
		return ;
	first = *stk_b;
	second = (*stk_b)->next;
	first->next = second->next;
	second->next = first;
	*stk_b = second;
	ft_printf("sb\n");
}

void	ss(t_node **stk_a, t_node **stk_b)
{
	swap_a(stk_a);
	swap_b(stk_b);
}
