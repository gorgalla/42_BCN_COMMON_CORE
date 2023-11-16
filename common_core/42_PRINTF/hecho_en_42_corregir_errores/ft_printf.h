/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:02:24 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/15 16:11:59 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int     ft_printf(char const *str, ...);
void	ft_putchar_pf(char c, size_t *count);
void	ft_putstr_pf(char *str, size_t *count);
void	ft_putnbr_pf(int n, size_t *count);
void	ft_putuint_pf(unsigned int n, size_t *count);
void	ft_puthex_pf(unsigned int n, size_t *count, char *base);
void    ft_putptr_pf(void *ptr, size_t *count);

char	*ft_auxiliar_pf(unsigned long long n, char *base);

#endif
