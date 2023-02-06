/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:15:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 00:51:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_exit_e(int a, char c, int *move)
{
	if (a == 1 && c == 'E')
	{
		printf("number of move %d\n", ++*move);
		printf("You winner nice !!");
		exit(0);
	}
}

int	move_up(data *p, int a, int *move)
{
	char	temp;
	data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	ft_exit_e(a, p->map[i - 1][j], move);
	if (p->map[i - 1][j] != '1' && p->map[i - 1][j] != 'E')
	{
		if (p->map[i - 1][j] == 'C')
			p->map[i - 1][j] = '0';
		temp = p->map[i - 1][j];
		p->map[i - 1][j] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
		display_player(i - 1, j, p);
		display_gras(i, j, p);
	}
	return (0);
}

int	move_down(data *p, int a, int *move)
{
	char	temp;
	data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	ft_exit_e(a, p->map[i + 1][j], move);
	if (p->map[i + 1][j] != '1' && p->map[i + 1][j] != 'E')
	{
		if (p->map[i + 1][j] == 'C')
			p->map[i + 1][j] = '0';
		temp = p->map[i + 1][j];
		p->map[i + 1][j] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
		display_player(i + 1, j, p);
		display_gras(i, j, p);
	}
	return (0);
}

int	move_right(data *p, int a, int *move)
{
	char	temp;
	data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	ft_exit_e(a, p->map[i][j + 1], move);
	if (p->map[i][j + 1] != '1' && p->map[i][j + 1] != 'E')
	{
		if (p->map[i][j + 1] == 'C')
			p->map[i][j + 1] = '0';
		temp = p->map[i][j + 1];
		p->map[i][j + 1] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
		display_player(i, j + 1, p);
		display_gras(i, j, p);
	}
	return (0);
}

int	move_left(data *p, int a, int *move)
{
	char	temp;
	data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	ft_exit_e(a, p->map[i][j - 1], move);
	if (p->map[i][j - 1] != '1' && p->map[i][j - 1] != 'E')
	{
		if (p->map[i][j - 1] == 'C')
			p->map[i][j - 1] = '0';
		temp = p->map[i][j - 1];
		p->map[i][j - 1] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
		display_player(i, j - 1, p);
		display_gras(i, j, p);
	}
	return (0);
}
