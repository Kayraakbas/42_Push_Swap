/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:20:57 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 00:40:13 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_bits(node **stack)
{
    node	*head;
    int		max;
    int		max_bits;

    if (!stack || !*stack)
        return (0);
        
    head = *stack;
    max = head->index;
    max_bits = 0;
    while (head)
    {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void	sort_three(node **head)
{
	int	biggest;

	biggest = find_biggest(*head);
	if ((*head)->index == biggest)
		rotate_a(head);
	else if ((*head)->next->index == biggest)
		reverse_rotate_a(head);
	if ((*head)->index > (*head)->next->index)
		swap_a(head);
}
void	sort_five(node **stack_a, node **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	while (size--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
	}
	sort_three(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap_a(stack_a);
}

void	radix_sort(node **stack_a, node **stack_b)
{
    int		i;
    int		j;
    int		size;
    int		max_bits_len;

    if (!stack_a || !*stack_a)
        return;
    i = 0;
    size = ft_lstsize(*stack_a);
    max_bits_len = max_bits(stack_a);
    while (i < max_bits_len)
    {
        j = 0;
        while (*stack_a && j++ < size)
        {
            if (((*stack_a)->index >> i) & 1)
                rotate_a(stack_a);
            else
                push_b(stack_a, stack_b);
        }
        while (*stack_b)
            push_a(stack_a, stack_b);
        i++;
    }
}

void	sort_stack(node **stack_a, node **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (!sorted(stack_a) && size <= 3)
		sort_three(stack_a);
	else if (!sorted(stack_a) && size <= 5)
		sort_five(stack_a, stack_b);
	else if (!sorted(stack_a))
		radix_sort(stack_a, stack_b);
	else
	{
		free_list(stack_a);
		free_list(stack_b);
	}
}
