/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:38:53 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/13 12:04:58 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 224;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %i %c", a, '\n');
	printf("mod = %i %c", b, '\n');
	return (0);
}
*/
