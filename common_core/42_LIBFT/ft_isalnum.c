/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:41:38 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/19 14:45:37 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int x)
{
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (1);
	else if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Ingrese un carácter: ");
    scanf("%c", &ch);
    
    if (ft_isalnum(ch) != 0)
        printf("El carácter es alfanumérico.\n");
    else
        printf("El carácter no es alfanumérico.\n");
        
    return 0;
}*/
