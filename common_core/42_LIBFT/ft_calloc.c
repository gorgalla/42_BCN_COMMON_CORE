/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:35:13 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/23 19:34:40 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t x, size_t size)
{
	void	*result;

	result = malloc(x * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (x * size));
		return (result);
	}
}
