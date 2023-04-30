/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 23:54:48 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/30 17:13:26 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 4096

# define IN 0
# define OUT 1
# define ERR 2

int		display_file(char *filename);
void	ft_putstr(int fd, char *str);

#endif
