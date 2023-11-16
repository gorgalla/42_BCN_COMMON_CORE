/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:48:13 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/20 15:28:31 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t	i;
	char	*charr;

	charr = dest;
	i = 0;
	while (i < n)
	{
		charr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned char buffer[10];
	int i;

	ft_bzero(buffer, sizeof(buffer));
	for (i = 0; i < 10; i++)
	{
		if (buffer[i] == '0')
			printf("Todo ok");
	}
	return (0);
}*/
