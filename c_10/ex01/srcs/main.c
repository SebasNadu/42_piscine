/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:50:28 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/30 19:56:29 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		do_cat(NULL, NULL, 0);
	else
	{
		if (cat(argv, argc -1, 1))
			return (1);
	}
	return (0);
}
