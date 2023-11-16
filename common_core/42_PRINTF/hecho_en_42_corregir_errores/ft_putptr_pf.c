/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:17:27 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/15 16:09:18 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void    ft_putptr_pf(void *ptr, size_t *count)
{
    char    *str;
	unsigned long long ptr_adress;

    ptr_adress = (unsigned long long)ptr;
    ft_putstr_pf("0x", count);
    str = ft_auxiliar_pf(ptr_adress, HEX_LOW_BASE);
	printf(" se ha asignado correctamente a str (putptr) \n");
    ft_putstr_pf(str, count);
    free(str);
	printf(" se ha liberado la memoria correctamente \n");
}
