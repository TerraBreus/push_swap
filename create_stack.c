/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:54:08 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:21:29 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*append_node(t_node *top, int nbr)
{
	t_node	*temp;

	if (top == NULL)
	{
		top = (t_node *)malloc(sizeof(t_node));
		if (top == NULL)
			return (NULL);
		top->next = NULL;
		top->prev = NULL;
	}
	else
	{
		temp = (t_node *)malloc(sizeof(t_node));
		if (temp == NULL)
			return (NULL);
		top->next = temp;
		temp->next = NULL;
		temp->prev = top;
		top = temp;
	}
	top->nbr = nbr;
	return (top);
}

static t_node	*close_chain(t_node *top)
{
	t_node	*temp;

	if (top == NULL)
		return (NULL);
	temp = top;
	while (temp->prev != NULL)
		temp = temp->prev;
	top->next = temp;
	temp->prev = top;
	return (top);
}

t_node	*create_stack(int argc, char *argv[])
{
	t_node	*top;
	long	nbr;

	top = NULL;
	while (argc-- > 1)
	{
		nbr = ft_atol(argv[argc]);
		if (nbr > INT_MAX || nbr < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			close_chain(top);
			ft_free(top);
			return (NULL);
		}
		top = append_node(top, nbr);
		if (top == NULL)
			break ;
	}
	if (top == NULL)
		return (NULL);
	close_chain(top);
	return (top);
}
