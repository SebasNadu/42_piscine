/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:08:09 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 16:19:52 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
	int		result;

	str = "";
	result = ft_str_is_alpha(str);
	printf("%i", result);
	
	char lola[5] = "lola";
	lola[4] = '\0';
	printf("%i\n", ft_str_is_alpha(lola));
	return (0);
}
*/
