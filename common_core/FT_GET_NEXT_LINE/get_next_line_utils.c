/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:59:58 by gorgalla          #+#    #+#             */
/*   Updated: 2023/12/13 16:05:36 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **p)
{
	free(*p);
	*p = NULL;
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
		i++;
	return (i);
}

int	ft_strchr(char *s, int c, int flag)
{
	int	i;

	if (flag == 1 && !s)
		return (-8);
	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strnjoin(char *s1, char *s2, int n)
{
	char	*output;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return (NULL);
	output = malloc(ft_strlen(s1) + n + 1);
	if (!output)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			output[i] = s1[i];
			i++;
		}
	}
	while (s2 && s2[j] != '\0' && j < n)
		output[i++] = s2[j++];
	output[i] = '\0';
	if (s1)
		ft_free(&s1);
	return (output);
}

char	*ft_strndup(char *input, int n)
{
	char	*output;
	int		len;
	int		i;

	i = 0;
	len = n;
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	while (input && input[i] != '\0' && i < n)
	{
		output[i] = input[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
