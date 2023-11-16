/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:44:52 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/23 21:39:08 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	copia;

	copia = n;
	if (copia < 0)
	{
		copia = (copia * -1);
		write(fd, "-", 1);
	}
	if (copia > 9)
	{
		ft_putnbr_fd(copia / 10, fd);
		ft_putchar_fd((copia % 10) + '0', fd);
	}
	else
		ft_putchar_fd(copia + '0', fd);
}
