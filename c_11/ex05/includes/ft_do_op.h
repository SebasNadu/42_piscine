/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:46:31 by johnavar          #+#    #+#             */
/*   Updated: 2023/05/01 20:48:53 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_calc(int a, char op, int b);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
