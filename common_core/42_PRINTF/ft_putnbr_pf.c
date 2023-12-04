/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:17:00 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/22 17:03:49 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, size_t *count)
{
	if (n == -2147483648)
	{
		ft_putnbr_pf((n / 10), count);
		ft_putchar_pf('8', count);
	}
	else if (n < 0)
	{
		ft_putchar_pf('-', count);
		ft_putnbr_pf(-n, count);
	}
	else
	{
		if (n > 9)
			ft_putnbr_pf((n / 10), count);
		ft_putchar_pf(('0' + n % 10), count);
	}
}
