/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:19:36 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 11:31:10 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
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

	str = "";
	result = ft_str_is_lowercase(str);
	printf("%i", result);
	return (0);
}
*/
