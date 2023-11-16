/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliar_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:57:13 by gorgalla          #+#    #+#             */
/*   Updated: 2023/11/15 16:11:40 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen_pf(const	char *str)
{
	size_t len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_bzero_pf(void *str, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n > 0)
	{
		*s = 0;
		s++;
		n--;
	}
}

void	*ft_calloc_pf(size_t x, size_t n)
{
	void	*dest;

	dest = malloc (x * n);
	if (!dest)
		return (NULL);
	ft_bzero_pf(dest, x * n);
	return (dest);
}

static	size_t	ft_length(unsigned long long n, char *base)
{
	size_t				l;
	unsigned long long	base_length;

	l = 0;
	base_length = ft_strlen_pf(base);
	while (n >= base_length)
	{
		n /= base_length;
		l++;
	}
	return (l);
}

char	*ft_auxiliar_pf(unsigned long long n, char *base)
{
	char	*str;
	int		num_length;
	int		base_length;

	num_length = ft_length(n, base);
	base_length = ft_strlen_pf(base);
	str = ft_calloc_pf((num_length + 1), (sizeof(char)));
	if (!str)
		return (NULL);
	while (num_length)
	{
		num_length = num_length - 1;
		str[num_length] = base[n % base_length];
		n /= base_length;
	}
	return (str);
}
