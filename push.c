/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:25:35 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:22:24 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_last_element(t_node **top1, t_node **top2)
{
	(*top1)->next = (*top2)->next;
	(*top1)->prev = (*top2);
	(*top2)->next->prev = *top1;
	(*top2)->next = *top1;
	*top2 = *top1;
	*top1 = NULL;
}

static void	push_to_empty(t_node **top1, t_node **top2)
{
	(*top1)->prev->next = (*top1)->next;
	(*top1)->next->prev = (*top1)->prev;
	*top2 = *top1;
	*top1 = (*top1)->prev;
	(*top2)->next = (*top2);
	(*top2)->prev = (*top2);
}

static void	push(t_node **top1, t_node **top2)
{
	t_node	*temp;

	if ((*top1) == NULL)
		return ;
	else if ((*top1)->next == (*top1))
		push_last_element(top1, top2);
	else if ((*top2) == NULL)
		push_to_empty(top1, top2);
	else
	{
		temp = (*top1)->prev;
		(*top1)->prev->next = (*top1)->next;
		(*top1)->next->prev = (*top1)->prev;
		(*top1)->next = (*top2)->next;
		(*top1)->prev = *top2;
		(*top2)->next->prev = *top1;
		(*top2)->next = *top1;
		*top2 = *top1;
		*top1 = temp;
	}
}

void	pa(t_node **top_a, t_node **top_b)
{
	push(top_b, top_a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_node **top_a, t_node **top_b)
{
	push(top_a, top_b);
	ft_putstr_fd("pb\n", 1);
}
