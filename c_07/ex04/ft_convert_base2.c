/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:55:00 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/20 16:05:03 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	is_valid_base(const char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = -1;
	while (base[++i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base [i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
			if (base[j++] == base[i])
				return (0);
	}
	return (1);
}

int	is_into_base(const char c, const char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (1);
	return (0);
}

int	base_index(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (base[i] == c)
			return (i);
	return (0);
}
