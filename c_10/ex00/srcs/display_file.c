/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 23:52:26 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/30 17:19:50 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	display_file(char *filename)
{
	int			fd;
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (1);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (bytes_read == (unsigned int)-1)
			return (1);
		buffer[bytes_read] = '\0';
		ft_putstr(OUT, buffer);
	}
	close(fd);
	return (0);
}
