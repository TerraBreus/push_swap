/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_or_dupl.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:24:28 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:21:55 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	are_duplicates(t_node *top)
{
	t_node	*temp1;
	t_node	*temp2;

	temp1 = top;
	while (temp1 != top->prev)
	{
		temp2 = temp1->next;
		while (temp2 != temp1)
		{
			if (temp2->nbr == temp1->nbr)
			{
				ft_putstr_fd("Error\n", 2);
				return (1);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (0);
}

int	is_sorted(t_node *top)
{
	t_node	*temp1;

	temp1 = top;
	while (1)
	{
		if ((temp1->nbr) > (temp1->prev->nbr))
			return (0);
		temp1 = temp1->prev;
		if (temp1 == top->next)
			break ;
	}
	return (1);
}

int	is_sorted_or_dupl(t_node *top)
{
	if (are_duplicates(top))
	{
		ft_free(top);
		return (1);
	}
	if (is_sorted(top))
	{
		ft_free(top);
		return (1);
	}
	return (0);
}
