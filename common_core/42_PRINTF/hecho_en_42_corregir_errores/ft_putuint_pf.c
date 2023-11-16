/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:18:28 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/15 13:49:08 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putuint_pf(unsigned int n, size_t *count)
{
    char    *str;
    
    str = ft_auxiliar_pf(n, "0123456789");
    ft_putstr_pf(str, count);
    free(str);
}
