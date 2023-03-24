/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:28:33 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 11:23:10 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	else
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "hello";
	char	b[3];
	int	i;
	unsigned int	result;

	i = 3;
	result = ft_strlcpy(b, a, i);
	printf("%d", result);
	printf("%s", b);
	return (0);
}
*/
