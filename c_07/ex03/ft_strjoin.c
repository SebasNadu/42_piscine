/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:40:17 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/18 19:05:54 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int	get_total_size(int size, char **strs, char *sep)
{
	int	total_size;
	int	i;

	total_size = 0;
	i = -1;
	while (++i < size)
	{
		total_size += ft_strlen(strs[i]);
		if (i < size - 1)
			total_size += ft_strlen(sep);
	}
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;
	int		total_size_;

	i = 0;
	total_size_ = get_total_size(size, strs, sep);
	s = malloc(sizeof(char) * total_size_ + 1);
	if (!s)
		return (0);
	j = -1;
	while (++j < size)
	{
		k = 0;
		while (strs[j][k])
			s[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && j < size - 1)
			s[i++] = sep[k++];
	}
	s[i] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	*text[5];

	text[0] = "Hello";
	text[1] = "world";
	text[2] = "!!,";
	text[3] = "I'm";
	text[4] = "Sebastian";
	printf("%s\n", ft_strjoin(5, text, " - "));
	return (0);
} */
