/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:26:11 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:26:13 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_node **top_a, t_node **top_b)
{
	int	length;

	length = ft_length(*top_a);
	normalize(*top_a);
	if (length < 6)
		man_sort(top_a, top_b, length);
	else
		radix_sort(top_a, top_b, length);
}
