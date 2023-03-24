/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:46:55 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 11:08:11 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "hello";
	char	b[] = "aeu";
	char	a1[] = "hello";
	char	b1[] = "aeu";

	ft_strcpy(b, a);
	strcpy(b1, a1);
	if (strcmp(b, b1) == 0)
		printf("ok\n");
	printf("%s\n", b);
	printf("%s", a);
	return (0);
}
*/
