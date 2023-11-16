/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:05:09 by gorgalla          #+#    #+#             */
/*   Updated: 2023/10/14 14:05:11 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[10];
	char	src[];

	src = "Hola, mundo!"
		size_t len = ft_strlcpy(dst, src, sizeof(dst));
	printf("dst = %s\n", dst);
	printf("len = %zu\n", len);
	return (0);
}*/
