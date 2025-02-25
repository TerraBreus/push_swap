/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalise.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:25:19 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:25:22 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalize(t_node *top)
{
	t_node	*temp1;
	t_node	*temp2;

	temp1 = top;
	while (1)
	{
		temp1->index = 0;
		temp2 = temp1->next;
		while (temp2 != temp1)
		{
			if (temp1->nbr > temp2->nbr)
				(temp1->index)++;
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
		if (temp1 == top)
			break ;
	}
}
