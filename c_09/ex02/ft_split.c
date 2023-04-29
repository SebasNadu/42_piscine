/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:54:22 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/29 22:50:38 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_strdup(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc ((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		size;
	int		i;
	int		j;

	i = 0;
	size = ft_wordcount(str, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_is_charset(*str, charset))
			str++;
		j = ft_wordlen(str, charset);
		dest[i] = ft_strdup(str, j);
		str += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**split;

	(void)ac;
	split = ft_split(av[1], av[2]);
	i = 0;
	printf("tab start\n");
	while (split[i])
	{
		printf("tab [%d]: $%s$\n", i, split[i]);
		i++;
	}
	printf("tab end\n");
	return (0);
} */
