/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:26:22 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 16:36:57 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO pass to print address the array and inside the function convert to long
// TODO restable the line of the string in main
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_address(unsigned int long value, int i)
{
	if (i > 0)
	{
		print_address(value / 16, i - 1);
		if (value % 16 >= 10)
			ft_putchar('a' + value % 16 % 10);
		else
			ft_putchar('0' + value % 16);
	}
}

void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int long	addr_i;
	unsigned int		i;

	i = 0;
	addr_i = (unsigned int long)&addr;
	while (size-- > 80)
	{	
		print_address(addr_i, 16);
		ft_putchar(':');
		ft_putchar(' ');
		while (i < 8)
		{
			print_address(*(addr++), 2);
			print_address(*(addr++), 2);
			ft_putchar(' ');
		}
		ft_putchar('\n');
		addr_i += 16;
	}
}
/*
int	main(void)
{
	char	*str;
	unsigned int size;

	size = 86;
	str = "Bonjour les amin\nches...c. est fo\n
u.tout.ce qu on\npeut faire avec.\n..print_memory..\n..lol.lol. .";
	ft_print_memory(str, size);
	return (0);
}
*/
