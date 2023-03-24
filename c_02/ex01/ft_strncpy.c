/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:44:18 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 16:19:13 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && src[i])
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
 #include <stdio.h>
 #include <string.h>
int	main(void)
{
	char	a[] = "hello";
	char	b[50] = "haehe";
	char	a1[] = "hello";
	char	b1[50] = "htase";
	int	i;

	i = 5;
	ft_strncpy(b, a, i);
	strncpy(b1, a1, i);
	if (strcmp(b, b1) == 0)
		printf("ok\n");
	printf("%s\n", b);
	printf("%s\n", b1);
	printf("%s\n", a);
	printf("%s\n", a1);
	return (0);
}
*/
