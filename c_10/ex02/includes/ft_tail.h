/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 00:03:50 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 10:45:23 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <stdbool.h>
# include <unistd.h>
# include <libgen.h>

# define DEFAULT_LINE_COUNT 10
# define DEFAULT_BUFFER_SIZE 1024
# define NOTHING -1
# define IN 0
# define OUT 1
# define ERR 2

# define ERR_ILLEGAL_OPT "illegal option"
# define ERR_ILLEGAL_OFF "illegal offset"
# define ERR_OPT_REQ_ARG "option requires an argument"

#endif
