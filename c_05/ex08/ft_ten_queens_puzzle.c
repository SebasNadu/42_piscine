/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:50:58 by johnavar          #+#    #+#             */
/*   Updated: 2023/02/28 13:04:28 by johnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int board[][10])
{
	int		i;
	int		j;
	int		k;
	char	tmp[10];

	i = -1;
	k = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			if (board[i][j] == 1)
				buffer[++k] = j + '0';
		}
	}
	buffer[k] = '\n';
	write(1, buffer, k + 1);
}

int	is_good(int board[][10], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < row)
	{
		if (board[i++][col] == 1)
			return (0);
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i--][j--] == 1)
			return (0);
	}
	i = row;
	j = col;
	while (i >= 0 && j < 10)
	{
		if (board[i--][j++] == 1)
			return (0);
	}
	return (1);
}

void	queen(int board[][10], int row, int *count)
{
	int	i;

	i = 0;
	if (row == 10)
	{
		print_solution(board);
		*count = *count + 1;
		return ;
	}
	while (i < 10)
	{
		if (is_good(board, row, i))
		{
			board[row][i] = 1;
			queen(board, row + 1, count);
			board[row][i] = 0;
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	queen(board, 0, &count);
	return (count);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	printf("%i", ft_ten_queens_puzzle());
	return (0);
} */
