/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:16:22 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/27 16:40:17 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
