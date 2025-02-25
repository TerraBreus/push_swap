/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:25:56 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:25:58 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Function is specifically to understand how many iterations
//	we have to use when applying the radix sort.
static int	ft_iterations(unsigned int length)
{
	int	count;

	if (length != 0)
	{
		count = 0;
		while (length)
		{
			count++;
			length >>= 1;
		}
	}
	else
		return (0);
	return (count);
}

void	radix_sort(t_node **top_a, t_node **top_b, int length)
{
	int		max_i;
	int		i;
	int		j;

	max_i = ft_iterations(length);
	i = 0;
	while (i < max_i)
	{
		j = 0;
		while (j++ < length)
		{
			if (((((*top_a)->index) >> i) & 1) == 0)
				pb(top_a, top_b);
			else
				ra(top_a);
		}
		while (*top_b != NULL)
			pa(top_a, top_b);
		i++;
	}
}
