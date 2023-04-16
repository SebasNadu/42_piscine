/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:44:53 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/02 18:05:40 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
}

int	main(void)
{
	int	min;
	int	max;
	int	dif;
	int	**result;
	int	i;

	i = 0;
	min = 4;
	max = 7;
	dif = max - min;
	result = ft_ultimate_range(min, max);
	while (i < dif)
		printf("%i\n", result[i++]);
	return (0);
}
