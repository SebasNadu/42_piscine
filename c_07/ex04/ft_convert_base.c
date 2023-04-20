/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:56:37 by johnavar          #+#    #+#             */
/*   Updated: 2023/04/20 16:01:04 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(const char *s);
int				is_valid_base(const char *base);
int				is_into_base(const char c, const char *base);
int				base_index(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	i = i - 1;
	while (is_into_base(str[++i], base))
		nb = nb * ft_strlen(base) + (base_index(str[i], base) / ft_strlen(base))
			+ (base_index(str[i], base) % ft_strlen(base));
	return (nb * sign);
}

int	count_nbr(unsigned int nb, char *base)
{
	int	b;
	int	base_len;

	b = 1;
	base_len = ft_strlen(base);
	while (nb >= base_len)
	{
		nb = nb / base_len;
		b++;
	}
	return (b);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	int				nbneg;
	char			*res;
	int				i;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (0);
	nbneg = ft_atoi_base(nbr, base_from);
	if (nbneg < 0)
		nb = -nbneg;
	else
		nb = nbneg;
	i = count_nbr(nb, base_to) + ((nbneg < 0));
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	res[i] = '\0';
	while (i--)
	{
		res[i] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (nbneg < 0)
		res[0] = '-';
	return (res);
}

/* int	main(void)
{
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("result : $%s$\n", ft_convert_base("-1", "0123456789", "abcdefghij"));
	return (0);
} */
