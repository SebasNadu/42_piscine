/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:24:18 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 16:22:19 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
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

	str = "HTEDTiaHEUCBUE";
	result = ft_str_is_uppercase(str);
	printf("%i", result);
	return (0);
}
*/
