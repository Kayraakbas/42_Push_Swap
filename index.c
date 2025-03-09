/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:28:37 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/09 19:39:58 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node *find_next_min(node **stack)
{
    node    *ptr;
    node    *result;
    int     min_num;

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

void index_stack(node **stack)
{
    int   index;
    node *ptr;

    index = 0;
    ptr = find_next_min(stack);
    ptr->index = -42;
    while (ptr)
    {
        ptr->index = index++;
        ptr = find_next_min(stack);
    }
}