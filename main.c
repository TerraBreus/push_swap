/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:37:39 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 12:24:54 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_node	*top_a;
	t_node	*top_b;

	if (argc <= 1)
		return (0);
	if (is_valid_input(argv + 1) == 0)
		return (0);
	top_b = NULL;
	top_a = create_stack(argc, argv);
	if (top_a == NULL)
		return (0);
	if (is_sorted_or_dupl(top_a))
		return (0);
	sort(&top_a, &top_b);
	ft_free(top_a);
	return (0);
}
