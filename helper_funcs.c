/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:29:00 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 00:38:17 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error_and_free_mat(char **mat)
{
	int i = 0;
	if (mat)
	{
		while (mat[i])
		{
			free(mat[i]);
			i++;
		}
		free(mat);
	}
	exit_error("Error");
}

void exit_error(const char *msg)
{
    ft_printf("%s\n", msg);
    exit(EXIT_FAILURE);
}

int is_valid_number(const char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return (0);
    while (str[i]) 
    { 
        if (!ft_isdigit(str[i])) 
            return (0); 
        i++; 
    } 
    return (1);
}

int contains_space(const char *str)
{
    while (*str)
    {
        if ((*str == ' ') || (*str >= '\t' && *str <= '\r'))
            return (1);
        str++;
    }
    return (0);
}

int check_arg_format(char **mat)
{
    int i = 0;
    while (mat[i])
    {
        if (!is_valid_number(mat[i]))
            return (1);
        i++;
    }
    return (0);
}
void push(node **stk, int val)
{
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node == NULL)
        exit_error("new node for push could not be initialized\n");
    
    new_node->val = val;
    new_node->index = -42;
    new_node->next = NULL;
    
    if (*stk == NULL)
        *stk = new_node;
    else {
        node *last = *stk;
        while (last->next)
            last = last->next;
        last->next = new_node;
    }
}

node* create_node(int data)
{

    node *new_node = (node*)malloc(sizeof(node));

    if (new_node == NULL){
        ft_printf("Node could not initialized\n");
        return NULL;
    }

    new_node->val = data;
    new_node->next = NULL;
    
    return new_node;
}

void free_list(node **lst)
{

    node *head = *lst;
    node *ptr;
    
    while (head != NULL)
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
    *lst = NULL;
}

void print_list(node *lst)
{
    node *ptr;
    ptr = lst;
    if (lst == NULL)
    {
        ft_printf("Empty stack\n");
        return;
    }
    while (ptr != NULL)
    {
        ft_printf("val : %d idx: %d\n",ptr->val, ptr->index);
        ptr = ptr->next;
    }
}

int	ft_lstsize(node *head)
{
	size_t	i;
	node	*ptr;

	ptr = head;
	i = 0;
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
int	sorted(node **head)
{
	node	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	find_biggest(node *head)
{
	int		big;
	node	*tmp;

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
