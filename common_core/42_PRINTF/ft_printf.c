/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:00:45 by gorgalla          #+#    #+#             */
/*   Updated: 2023/12/04 11:40:01 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_format_pf(va_list va, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), count);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), count);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), count);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), count);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), count, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), count, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar_pf(*str, count);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (-1);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format_pf(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}
