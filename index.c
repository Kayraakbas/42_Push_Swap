/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:28:37 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 22:35:46 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_next_min(t_node **stack)
{
	t_node	*ptr;
	t_node	*result;
	int		min_num;

	min_num = 2147483647;
	ptr = *stack;
	result = NULL;
	while (ptr)
	{
		if (ptr->index == -42 && ptr->val < min_num)
		{
			min_num = ptr->val;
			result = ptr;
		}
		ptr = ptr->next;
	}
	return (result);
}

void	index_stack(t_node **stack)
{
	int		index;
	t_node	*ptr;

	index = 0;
	ptr = find_next_min(stack);
	ptr->index = -42;
	while (ptr)
	{
		ptr->index = index++;
		ptr = find_next_min(stack);
	}
}
