/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:08:39 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 15:09:56 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int c, unsigned int n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = dest;
	i = 0;
	while (i < n)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
    char buffer[10];

    // Rellena el búfer con el valor 'a' utilizando ft_memset().
    ft_memset(buffer, 'a', sizeof(buffer));

    // Comprueba si el búfer está relleno con el valor 'a'.
    for (int i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] != 'a') {
            printf("ft_memset() no funciona correctamente.\n");
            return 1;
        }
    }

    for (int i = 0; i < sizeof(buffer); i++) {
        if (buffer[i] == 'a') {
            printf("ft_memset() funciona correctamente.!!!\n");
            return 0;
        }
    }
    return 0;
}*/
