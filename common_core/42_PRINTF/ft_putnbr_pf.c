/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:45:10 by gorgalla          #+#    #+#             */
/*   Updated: 2023/10/30 14:45:12 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_putnbr_pf((num / 10), counter);
		ft_putchar_pf('8', counter);
	}
	else if (num < 0)
	{
		ft_putchar_pf('-', counter);
		ft_putnbr_pf(-num, counter);
	}
	else
	{
		if (num > 9)
			ft_putnbr_pf((num / 10), counter);
		ft_putchar_pf(('0' + num % 10), counter);
	}
}
