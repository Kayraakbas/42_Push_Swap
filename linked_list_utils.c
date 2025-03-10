/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:39:55 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 22:58:05 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stk, int val)
{
	t_node	*new_node;
	t_node	*last;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		exit_error("new t_node for push could not be initialized\n");
	new_node->val = val;
	new_node->index = -42;
	new_node->next = NULL;
	if (*stk == NULL)
		*stk = new_node;
	else
	{
		last = *stk;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
}

void	free_list(t_node **lst)
{
	t_node	*head;
	t_node	*ptr;

	head = *lst;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	*lst = NULL;
}

void	print_list(t_node *lst)
{
	t_node	*ptr;

	ptr = lst;
	if (lst == NULL)
	{
		ft_printf("Empty stack\n");
		return ;
	}
	while (ptr != NULL)
	{
		ft_printf("val : %d idx: %d\n", ptr->val, ptr->index);
		ptr = ptr->next;
	}
}

int	ft_lstsize(t_node *head)
{
	size_t	i;
	t_node	*ptr;

	ptr = head;
	i = 0;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

int	sorted(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	find_biggest(t_node *head)
{
	int		big;
	t_node	*tmp;

	big = -2147483648;
	tmp = head;
	while (tmp)
	{
		if (tmp->index > big)
			big = tmp->index;
		tmp = tmp->next;
	}
	return (big);
}
