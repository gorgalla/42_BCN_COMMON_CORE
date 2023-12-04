/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:17:27 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/22 17:06:20 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *count)
{
	char				*str;
	unsigned long long	ptr_adress;

	ptr_adress = (unsigned long long)ptr;
	if (ptr == NULL)
	{
		ft_putstr_pf("0x0", count);
		return ;
	}
	ft_putstr_pf("0x", count);
	str = ft_auxiliar_pf(ptr_adress, HEX_LOW_BASE);
	ft_putstr_pf(str, count);
	free(str);
}
