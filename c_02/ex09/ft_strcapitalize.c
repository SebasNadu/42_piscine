/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:14:21 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 11:40:32 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_not_alphanumeric(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
	{
		if (!(c >= 'a' && c <= 'z'))
		{
			if (!(c >= '0' && c <= '9'))
			{
				return (0);
			}
		}
	}
	return (1);
}

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (is_lowercase(str[i]) == 0)
				str[i] -= 32;
		}
		else if ((str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			if (is_lowercase(str[i]) == 0)
				str[i] -= 32;
		}
		else if (is_not_alphanumeric(str[i - 1]) == 0)
		{
			if (is_lowercase(str[i]) == 0)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "Zalut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
