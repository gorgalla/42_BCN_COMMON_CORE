/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:16:42 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/15 16:12:42 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

void	ft_puthex_pf(unsigned int n, size_t *count, char *base)
{
	char	*str;

	str = ft_auxiliar_pf(n, base);
	ft_putstr_pf(str, count);
	free(str);
}
