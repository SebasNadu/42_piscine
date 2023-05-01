/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:33:14 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:54:27 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_atoi(char *str)
{
	int	n;
	int	revert;

	n = 0;
	revert = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	revert = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			revert = 1 - revert;
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if (revert)
		n *= -1;
	return (n);
}
