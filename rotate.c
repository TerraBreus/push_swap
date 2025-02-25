/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:05 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:23:16 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	rotate(t_node **top)
{
	*top = (*top)->prev;
}

void	rb(t_node **top_b)
{
	rotate(top_b);
	ft_putstr_fd("rb\n", 1);
}

void	ra(t_node **top_a)
{
	rotate(top_a);
	ft_putstr_fd("ra\n", 1);
}

void	rr(t_node **top_a, t_node **top_b)
{
	rotate(top_a);
	rotate(top_b);
	ft_putstr_fd("rr\n", 1);
}
