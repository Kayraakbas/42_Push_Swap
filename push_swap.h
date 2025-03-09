/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 12:48:51 by kayraakbas        #+#    #+#             */
/*   Updated: 2025/03/10 00:38:42 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

// Struct Definition
typedef struct Node
{
    int val;
    int index;
    struct Node *next;
} node;


void    swap_a(node **stk_a);
void    swap_b(node **stk_b);
void    ss(node **stk_a, node **stk_b);
void    push_a(node **stk_a, node **stk_b);
void    push_b(node **stk_b, node **stk_a);
void    rotate_a(node **stk_a);
void    rotate_b(node **stk_b);
void    rr(node **stk_a, node **stk_b);
void    reverse_rotate_a(node **stk_a);
void    reverse_rotate_b(node **stk_b);
void    rrr(node **stk_a, node **stk_b);

void	handle_error_and_free_mat(char **mat);
int     is_valid_number(const char *str);
int     contains_space(const char *str);
int     check_arg_format(char **mat);
void    push(node **stk, int val);
node    *create_node(int data);
void    free_list(node **lst);
void    print_list(node *lst);
int     ft_lstsize(node *head);
void    exit_error(const char *msg);
int	    sorted(node **head);
int	    find_biggest(node *head);

void	radix_sort(node **stack_a, node **stack_b);
int     max_bits(node **stack);
void    index_stack(node **stack);
void    print_stacks(node *stack_a, node *stack_b);
void	sort_stack(node **stack_a, node **stack_b);

#endif

