/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:11:55 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:13:07 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	n;
	int	count;

	count = 0;
	n = 0;
	while (n < length)
		if (f(tab[n++]))
			count++;
	return (count);
}
