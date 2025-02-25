/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:25:28 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/17 14:22:05 by zivanov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct node
{
	int			nbr;
	int			index;
	struct node	*next;
	struct node	*prev;
}	t_node;

int			is_valid_input(char *argv[]);
int			is_sorted(t_node *top);
int			ft_length(t_node *top);
int			is_sorted_or_dupl(t_node *top);
t_node		*create_stack(int argc, char *argv[]);
long		ft_atol(const char *str);
void		normalize(t_node *top);
void		radix_sort(t_node **top_a, t_node **top_b, int length);
void		man_sort(t_node **top_a, t_node **top_b, int length);
void		sort(t_node **top_a, t_node **top_b);
void		ft_free(t_node *top);
void		ft_putstr_fd(char *str, int fd);
void		sa(t_node *top_a);
void		sb(t_node *top_b);
void		ss(t_node *top_a, t_node *top_b);
void		ra(t_node **top_a);
void		rb(t_node **top_b);
void		rr(t_node **top_a, t_node **top_b);
void		rra(t_node **top_a);
void		rrb(t_node **top_b);
void		rrr(t_node **top_a, t_node **top_b);
void		pa(t_node **top_a, t_node **top_b);
void		pb(t_node **top_a, t_node **top_b);
