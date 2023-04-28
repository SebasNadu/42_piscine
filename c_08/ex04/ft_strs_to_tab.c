/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 07:34:29 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/28 11:57:03 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

typedef struct s_stock_str	t_stock_str;

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;
	int		l;

	l = 0;
	n = 0;
	l = ft_strlen(src);
	ptr = malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);
	while (src[n])
	{
		ptr[n] = src[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	if (ac <= 0 || av == NULL)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].str = av[i];
		if (tab[i].str == NULL)
			return (NULL);
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
			return (NULL);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
