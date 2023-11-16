/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:45:20 by gorgalla          #+#    #+#             */
/*   Updated: 2023/10/30 14:45:22 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	char				*str;
	unsigned long long	ptr_adress;

	ptr_adress = (unsigned long)ptr;
	ft_putstr_pf("0x", counter);
	str = ft_aux_pf(ptr_adress, HEX_LOW_BASE);
	ft_putstr_pf(str, counter);
	free(str);
}
