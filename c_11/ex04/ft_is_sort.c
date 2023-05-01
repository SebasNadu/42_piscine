/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:18:26 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:22:25 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			asc++;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			desc++;
		else
		{
			asc++;
			desc++;
		}
		i++;
	}
	if (asc == length || desc == length)
		return (1);
	return (0);
}
