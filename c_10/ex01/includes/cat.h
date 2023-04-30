/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:07:17 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/30 19:48:57 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

# define IN 0
# define OUT 1
# define ERR 2
# define BUFFER_SIZE 30000

void	ft_putstr(int fd, char *str);
void	do_cat(char *executable, char *path, int file_descriptor);
int		cat(char **paths, int count, int offset);

#endif
