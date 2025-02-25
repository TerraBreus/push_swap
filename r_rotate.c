/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:25:42 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:22:51 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r_rotate(t_node **top)
{
	*top = (*top)->next;
}

void	rra(t_node **top_a)
{
	r_rotate(top_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_node **top_b)
{
	r_rotate(top_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node **top_a, t_node **top_b)
{
	r_rotate(top_a);
	r_rotate(top_b);
	ft_putstr_fd("rrr\n", 1);
}
