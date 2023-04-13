/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:06:55 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/11 12:54:24 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	set_x(int x, char left, char middle, char right)
{
	if (x-- > 0)
	{
		ft_putchar(left);
		while (x-- > 1)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(right);
	}
	ft_putchar('\n');
}

void	set_y(int x, int y, char wall)
{
	int	i;

	while (y-- > 2)
	{
		i = x;
		ft_putchar(wall);
		while (i-- > 2)
			ft_putchar(' ');
		if (x > 1)
			ft_putchar(wall);
		ft_putchar('\n');
	}
}	

void	rush(int x, int y)
{
	if (y > 0)
		set_x(x, 'o', '-', 'o');
	set_y(x, y, '|');
	if (y > 1)
		set_x(x, 'o', '-', 'o');
}
