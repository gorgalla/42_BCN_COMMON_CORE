/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:35:54 by gorgalla          #+#    #+#             */
/*   Updated: 2023/09/23 21:56:33 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*p_s1;
	size_t	i;

	p_s1 = (char *)s1;
	i = 0;
	d = (char *)malloc(ft_strlen(p_s1) + 1);
	if (d == NULL)
		return (NULL);
	while (p_s1[i] != '\0')
	{
		d[i] = p_s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
