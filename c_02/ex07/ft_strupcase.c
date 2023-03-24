/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:18:57 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 11:36:20 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "AotehutsszZoeu";

	ft_strupcase(str);
	printf("%s", str);
	return (0);
}
*/
