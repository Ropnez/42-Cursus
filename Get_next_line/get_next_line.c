/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buryilma <buryilma@42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 04:59:48 by buryilma          #+#    #+#             */
/*   Updated: 2023/01/23 05:10:32 by buryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_creat_buffer(int fd, char *buffer)
{
	char	*temp;
	int		buff_size;

	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	buff_size = 1;
	while (!ft_strchr(buffer) && buff_size != 0)
	{
		buff_size = read(fd, temp, BUFFER_SIZE);
		if (buff_size == -1)
		{
			free(temp);
			return (NULL);
		}
		temp[buff_size] = '\0';
		buffer = ft_strjoin(buffer, temp);
	}
	free(temp);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = ft_creat_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_new_left_str(buffer);
	return (line);
}
// #include <stdio.h>
//# include <fcntl.h>
// int	main()
// {
// 	int	fd = open("open.txt", O_RDONLY);
// 	char *a;
// 	while(a != 0)
// 	{
// 	printf("%s", a);
// 	a = get_next_line(fd);
// 	}
// }
