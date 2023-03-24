/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:29:42 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/16 16:25:27 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
		{
			i++;
			count++;
		}
		else
			i++;
	}
	if (i == count)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char    *str;
    int     result;

    str = '\a';
    result = ft_str_is_printable(str);
    printf("%i", result);
    return (0);
}
*/
