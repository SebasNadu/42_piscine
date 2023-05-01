/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:03:05 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:09:48 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	index;
	int	result;

	result = 0;
	index = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]) != 0)
		{
			result = 1;
			break ;
		}
		index++;
	}
	return (result);
}

int	ft_function(char *str)
{
	if (*str == 'x')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(5 * sizeof(char *));
	array[0] = "o";
	array[1] = "o";
	array[2] = "o";
	array[3] = "x";
	array[4] = 0;
	printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
	return (0);
}
