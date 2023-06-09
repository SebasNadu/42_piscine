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

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(unsigned char *str, unsigned int temp)
{
	unsigned int		i;
	char				*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (i < 16 && str[i + temp])
	{
		ft_putchar(hex[str[i + temp] / 16]);
		ft_putchar(hex[str[i + temp] % 16]);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i <= 16)
	{
		if (i % 2 == 0)
			write(1, "  ", 2);
		else
			write(1, "   ", 3);
		i++;
	}
}

void	ft_printhexa(unsigned long int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[nb / 16]);
	ft_putchar(hex[nb % 16]);
}

void	ft_putstr(unsigned char *str, unsigned int temp)
{
	unsigned int		i;

	i = 0;
	while (i < 16 && str[i + temp])
	{
		if (str[i + temp] < 32 || str[i + temp] > 126)
		{
			write(1, ".", 1);
			i++;
		}
		else
		{
			write(1, &str[i + temp], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		j = 8;
		printf("printf address => %p\n", (addr + i));
		while (--j >= 0)
		{
			ft_printhexa((unsigned long int)(addr + i) >> j * 8 & 0xff);
		}
		write(1, ": ", 2);
		if (i % 16 == 0)
			ft_printhex((unsigned char *)addr, i);
		if (i % 16 == 0)
			ft_putstr((unsigned char *)addr, i);
		i += 16;
	}
	return (addr);
}
/*int	main(void)
{
	char	*string;

	string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(string, sizeof(string));
} */
