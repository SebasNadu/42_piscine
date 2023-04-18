/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:28:08 by johnavar          #+#    #+#             */
/*   Updated: 2023/03/02 15:48:31 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str_cpy;

	i = 0;
	while (src[i])
		i++;
	str_cpy = (char *)malloc(sizeof(char) * i + 1);
	if (!str_cpy)
		return (0);
	i = -1;
	while (src[++i])
		str_cpy[i] = src[i];
	str_cpy[i] = '\0';
	return (str_cpy);
}
/*
int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
} */
