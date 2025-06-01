/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakbas <omakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:30:31 by omakbas           #+#    #+#             */
/*   Updated: 2025/03/20 22:55:48 by omakbas          ###   ########.fr       */
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
		if (ptr->index == -42 && ptr->val <= min_num)
		{
			min_num = ptr->val;
			result = ptr;
		}
		ptr = ptr->next;
	}
	return (result);
}

void	check_duplicates(t_node **stack)
{
	t_node	*ptr;
	t_node	*check_dup;

	if (!stack || !*stack)
		return ;
	ptr = *stack;
	while (ptr)
	{
		check_dup = ptr->next;
		while (check_dup)
		{
			if (ptr->val == check_dup->val)
			{
				free_list(stack);
				exit_error("Error");
			}
			check_dup = check_dup->next;
		}
		ptr = ptr->next;
	}
}

void	index_stack(t_node **stack)
{
	int		index;
	t_node	*ptr;

	check_duplicates(stack);
	index = 0;
	ptr = find_next_min(stack);
	ptr->index = -42;
	while (ptr)
	{
		ptr->index = index++;
		ptr = find_next_min(stack);
	}
}
