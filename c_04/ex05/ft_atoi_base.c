/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:12:02 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/22 14:19:05 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_validation(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	return (i);
}

int	ft_check_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	index;
	int	n_p;
	int	result;

	result = 0;
	n_p = 1;
	if (!ft_base_validation(base))
		return (0);
	i = ft_check_spaces(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			n_p *= -1;
	}
	while (str[i])
	{
		index = ft_check_base(str[i++], base);
		if (index >= 0)
			result = result * ft_strlen(base) + index;
		else
			return (result * n_p);
	}
	result *= n_p;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_atoi_base("a8", "0123456789abcdef"));
	return (0);
} */
