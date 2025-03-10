/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:12:16 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 22:15:24 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_cw(t_node **head)
{
	t_node	*tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
}

void	rotate_a(t_node **head)
{
	rotate_cw(head);
	write(1, "ra\n", 3);
}

void	rotate_b(t_node **head)
{
	rotate_cw(head);
	write(1, "rb\n", 3);
}

void	rotate_ab(t_node **stack_a, t_node **stack_b)
{
	rotate_cw(stack_a);
	rotate_cw(stack_b);
	write(1, "rr\n", 3);
}

void	rr(t_node **stk_a, t_node **stk_b)
{
	rotate_a(stk_a);
	rotate_b(stk_b);
}
