/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:09:07 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/09 22:44:13 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(node **stk_a)
{
    if (*stk_a == NULL || (*stk_a)->next == NULL)
        return;

    node *first = *stk_a;
    node *second = (*stk_a)->next;

    first->next = second->next;
    second->next = first;
    *stk_a = second;

    ft_printf("sa\n");
}

void swap_b(node **stk_b)
{
    if (*stk_b == NULL || (*stk_b)->next == NULL)
        return;

    node *first = *stk_b;
    node *second = (*stk_b)->next;

    first->next = second->next;
    second->next = first;
    *stk_b = second;

    ft_printf("sb\n");
}

void ss(node **stk_a, node **stk_b)
{
    swap_a(stk_a);
    swap_b(stk_b);
}

void	push_to(node **stack_from, node **stack_to)
{
	node	*tmp;

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

void	push_a(node **stack_a, node **stack_b)
{
	push_to(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	push_b(node **stack_a, node **stack_b)
{
	push_to(stack_a, stack_b);
	write(1, "pb\n", 3);
}


void	rotate_cw(node **head)
{
	node	*tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
}

void	rotate_a(node **head)
{
	rotate_cw(head);
	write (1, "ra\n", 3);
}

void	rotate_b(node **head)
{
	rotate_cw(head);
	write (1, "rb\n", 3);
}

void	rotate_ab(node **stack_a, node **stack_b)
{
	rotate_cw(stack_a);
	rotate_cw(stack_b);
	write(1, "rr\n", 3);
}


void rr(node **stk_a, node **stk_b)
{
    rotate_a(stk_a);
    rotate_b(stk_b);
}


void reverse_rotate_a(node **stk_a)
{
    if (!*stk_a || !(*stk_a)->next)
        return; // Nothing to reverse rotate if 0 or 1 element

    node *prev = NULL;
    node *last = *stk_a;

    while (last->next)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;     // Detach last node
    last->next = *stk_a;   // Move last node to front
    *stk_a = last;         // Update head to new first node

    ft_printf("rra\n");
}


void reverse_rotate_b(node **stk_b)
{
    if (!*stk_b || !(*stk_b)->next)
        return; // Nothing to reverse rotate if 0 or 1 element

    node *prev = NULL;
    node *last = *stk_b;

    while (last->next)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;     // Detach last node
    last->next = *stk_b;   // Move last node to front
    *stk_b = last;         // Update head to new first node

    ft_printf("rrb\n");
}


void rrr(node **stk_a, node **stk_b)
{
    reverse_rotate_a(stk_a);
    reverse_rotate_b(stk_b);
}
