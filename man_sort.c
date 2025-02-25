/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:25:13 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:25:17 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	man_sort_2(t_node **top_a)
{
	sa(*top_a);
}

/*
For readability, I chose to swap *top_a with 'x'.
This means that when performing any operations,
'x' will no longer point to the actual top of the stack
(since it was merely a copy of the top pointer)
That is why, after performing an operation
we must reasign 'x' to the top of the stack.
*/

static void	man_sort_3(t_node **top_a)
{
	t_node	*x;

	x = *top_a;
	if ((x->nbr) < (x->prev->nbr))
		rra(top_a);
	else if ((x->next->nbr) < x->nbr)
		ra(top_a);
	x = *top_a;
	if (((x->next->nbr) > x->nbr) && (x->nbr > (x->prev->nbr)))
		sa(*top_a);
}

static void	man_sort_4(t_node **top_a, t_node **top_b, int i)
{
	if ((((*top_a)->next)->index) == i)
		rra(top_a);
	while (((*top_a)->index) != i)
		ra(top_a);
	if (!(is_sorted(*top_a)))
	{
		pb(top_a, top_b);
		man_sort_3(top_a);
		pa(top_a, top_b);
	}
}

static void	man_sort_5(t_node **top_a, t_node **top_b)
{
	if ((((*top_a)->next)->index) == 0)
		rra(top_a);
	while (((*top_a)->index) != 0)
		ra(top_a);
	if (!(is_sorted(*top_a)))
	{
		pb(top_a, top_b);
		man_sort_4(top_a, top_b, 1);
		pa(top_a, top_b);
	}
}

void	man_sort(t_node **top_a, t_node **top_b, int length)
{
	if (length == 2)
		man_sort_2(top_a);
	else if (length == 3)
		man_sort_3(top_a);
	else if (length == 4)
		man_sort_4(top_a, top_b, 0);
	else
		man_sort_5(top_a, top_b);
}
