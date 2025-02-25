/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                       :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: zivanov <zivanov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:23:54 by zivanov           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:23 by zivanov        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_whitespace(const char str)
{
	return ((str >= 9 && str <= 12) || str == 32);
}

static int	is_number(const char str)
{
	return ((str >= '0' && str <= '9'));
}

static int	is_plusmin(const char str)
{
	return ((str == '-') || (str == '+'));
}

static int	is_valid_string(const char *str)
{
	while (*str)
	{
		if (!(is_whitespace(*str) || is_number(*str) || is_plusmin(*str)))
			return (0);
		if (is_plusmin(*str) && !(is_number(*(str + 1))))
			return (0);
		if (is_number(*str) && is_plusmin(*(str + 1)))
			return (0);
		str++;
	}
	return (1);
}

int	is_valid_input(char *argv[])
{
	if (!(**argv))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	while (*argv)
	{
		if (!(is_valid_string(*argv)))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		argv++;
	}
	return (1);
}
