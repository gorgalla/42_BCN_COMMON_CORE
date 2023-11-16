/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:51:00 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 14:51:13 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	return (n >= 0 && n <= 127);
}
/*
#include<stdio.h>
int main(void)
{
    char ascii;
    printf("Escribe un caracter: ");
    scanf("%c", &ascii);
    if (ft_isascii(ascii) != 0)
        printf("Es un caracter Ascii\n");
    else
        printf("No es un caracter Ascii\n");
}*/
