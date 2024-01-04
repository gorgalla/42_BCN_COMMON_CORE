/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorgalla <gorgalla@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:42:59 by gorgalla          #+#    #+#             */
/*   Updated: 2023/12/20 19:21:02 by gorgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t n, size_t size)
{
	char			*res;
	unsigned int	i;
	size_t			x;

	i = 0;
	x = n * size;
	res = (char *)malloc(x);
	if (!res)
		return (0);
	while (i < x)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}

char	*ft_update_gnl(char **next_line, int position)
{
	char	*temp;
	int		len;

	len = ft_strlen(*next_line) - position;
	temp = ft_strndup(*next_line + position, len);
	ft_free(next_line);
	*next_line = temp;
	return (*next_line);
}

char	*ft_output(char **next_line, int position, int bytes)
{
	char	*line;

	if (((bytes == 0 || bytes == -1) && !*next_line) || position == -5)
	{
		if (*next_line)
			return (*next_line);
		return (NULL);
	}
	line = NULL;
	if (position == -1)
		position = ft_strlen(*next_line);
	else
		position++;
	line = ft_strndup(*next_line, position);
	if (position == ft_strlen(*next_line))
		ft_free(next_line);
	else
		*next_line = ft_update_gnl(next_line, position);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*buff;
	int			position;
	int			bytes;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buff = NULL;
	position = ft_strchr(next_line, '\n', 0);
	while (position == -1 && position != -5)
	{
		buff = ft_calloc(BUFFER_SIZE + 1, 1);
		if (!buff)
			return (NULL);
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == 0 || bytes == -1)
			break ;
		next_line = ft_strnjoin(next_line, buff, bytes);
		position = ft_strchr(next_line, '\n', 1);
		ft_free(&buff);
	}
	ft_free(&buff);
	return (ft_output(&next_line, position, bytes));
}
