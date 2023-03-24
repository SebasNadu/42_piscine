/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:47:29 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 11:36:54 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "AotehutsszZoeu";

	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}
*/
