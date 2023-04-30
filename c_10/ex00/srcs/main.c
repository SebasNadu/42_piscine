/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 23:03:05 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/30 17:20:33 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr(ERR, "File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr(ERR, "Too many arguments.\n");
		return (1);
	}
	else
	{
		if (display_file(argv[1]))
		{
			ft_putstr(ERR, "Cannot read file.\n");
			return (1);
		}
	}
	return (0);
}
