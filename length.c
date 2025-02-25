/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:24:34 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:24:36 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_length(t_node *top)
{
	t_node	*temp;
	int		length;

	if (top)
	{
		temp = top->next;
		length = 1;
		while (temp != top)
		{
			length++;
			temp = temp->next;
		}
	}
	else
		length = 0;
	return (length);
}
