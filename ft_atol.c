/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_atol.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: zivanov <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/01/27 14:51:43 by zivanov        #+#    #+#                */
/*   Updated: 2025/02/18 14:32:33 by zivanov        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	long	nbr;
	int		is_neg;

	nbr = 0;
	is_neg = 0;
	while ((*str >= 11 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg = 1;
		str++;
	}
	nbr = 0;
	while (*(str) >= '0' && *(str) <= '9')
	{
		nbr += (*str++ - '0');
		if (*str >= '0' && *str <= '9')
			nbr *= 10;
		if ((nbr - 20) >= INT_MAX)
			return (nbr);
	}
	if (is_neg)
		nbr *= -1;
	return (nbr);
}
