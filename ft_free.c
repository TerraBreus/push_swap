/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:24:16 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:24:19 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_node *top)
{
	t_node	*temp;
	t_node	*next_node;

	if (!top)
		return ;
	temp = top;
	while (1)
	{
		next_node = top->next;
		free(top);
		if (temp == next_node)
			break ;
		top = next_node;
	}
}
