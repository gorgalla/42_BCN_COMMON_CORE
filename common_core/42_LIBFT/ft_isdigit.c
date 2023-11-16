/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:52:09 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/20 15:51:01 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>  
int main(void)
{
    char ch;
    printf("Ingrese un carácter: ");
    scanf("%c", &ch);
    
    if (ft_isdigit(ch) != 0)
        printf("Es un numero!.\n");
    else
        printf("No es un numero :(\n");
        
    return 0;
}*/
