/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:17:55 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/15 15:03:48 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr_pf(char *str, size_t *count)
{
    if (!str)
        str = "(null)";
    while (*str)
    {
        ft_putchar_pf(*str, count);
        str++;
    }
}
