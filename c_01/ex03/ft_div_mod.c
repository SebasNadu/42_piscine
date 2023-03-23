/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:20:24 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/13 12:02:13 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 224;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%i div %i = %i", a, b, div);
	printf("%c", '\n');
	printf("%i mod %i = %i", a, b, mod);
	return (0);
}
*/
