/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:03:23 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 16:21:32 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			i++;
			count++;
		}
		else
			i++;
	}
	if (i == count)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	int	result;

	str = NULL;
	result = ft_str_is_numeric(str);
	printf("%i", result);
	return (0);
}
*/
