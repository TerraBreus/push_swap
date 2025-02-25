/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:16 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:23:34 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

static void	swap(t_node *top)
{
	int	temp;

	temp = top->nbr;
	top->nbr = top->prev->nbr;
	top->prev->nbr = temp;
	temp = top->index;
	top->index = top->prev->index;
	top->prev->index = temp;
}

void	sa(t_node *top_a)
{
	swap(top_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_node *top_b)
{
	swap(top_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_node *top_a, t_node *top_b)
{
	swap(top_a);
	swap(top_b);
	ft_putstr_fd("ss\n", 1);
}
