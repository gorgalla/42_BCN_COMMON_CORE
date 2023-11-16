/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:54:50 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/27 16:34:57 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *pointer != c)
	{
		pointer++;
		n--;
	}
	if (n)
		return ((char *)pointer);
	else
		return (NULL);
}
