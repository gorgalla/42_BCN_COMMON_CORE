/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:04:48 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/26 09:41:56 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hola, mundo!";
  char str2[10];

  ft_memcpy(str2, str1, sizeof(str1));

  printf("str2: %s\n", str2);

  return 0;
}*/
