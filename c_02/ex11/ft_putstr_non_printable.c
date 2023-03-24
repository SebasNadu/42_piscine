/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:15:32 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 19:29:56 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int num)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	write(1, &hexx[num / 16], 1);
	write(1, &hexx[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "holahola\r\t\0";

	ft_putstr_non_printable(str);
	return (0);
}
*/
