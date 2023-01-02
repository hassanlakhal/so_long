/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 02:15:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/01/01 01:48:31 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move_up(g_data *p, int a, int *move)
{
	char	temp;
	g_data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	if (a == 1 && p->map[i - 1][j] == 'E')
	{
		printf("number of move %d\n", ++*move);
		printf("You winner nice !!");
		exit(0);
	}
	if (p->map[i - 1][j] != '1' && p->map[i - 1][j] != 'E')
	{
		if (p->map[i - 1][j] == 'C')
			p->map[i - 1][j] = '0';
		temp = p->map[i - 1][j];
		p->map[i - 1][j] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
		p->mlx_img = mlx_xpm_file_to_image(p->mlx, "player.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, j * 45, (i - 1)
				* 45);
		p->mlx_img = mlx_xpm_file_to_image(p->mlx, "gras.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, j * 45, i * 45);
	}
	return (0);
}

int	move_down(g_data *p, int a, int *move)
{
	char	temp;
	g_data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	if (a == 1 && p->map[i + 1][j] == 'E')
	{
		printf("number of move %d\n", ++*move);
		printf("You winner nice !!");
		exit(0);
	}
	if (p->map[i + 1][j] != '1' && p->map[i + 1][j] != 'E')
	{
		if (p->map[i + 1][j] == 'C')
			p->map[i + 1][j] = '0';
		temp = p->map[i + 1][j];
		p->map[i + 1][j] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
			p->mlx_img = mlx_xpm_file_to_image(p->mlx, "player.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, j * 45, (i + 1)
				* 45);
		p->mlx_img = mlx_xpm_file_to_image(p->mlx, "gras.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, j * 45, i * 45);
	}
	return (0);
}

int	move_right(g_data *p, int a, int *move)
{
	char	temp;
	g_data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	if (a == 1 && p->map[i][j + 1] == 'E')
	{
		printf("number of move %d\n", ++*move);
		printf("You winner nice !!");
		exit(0);
		;
	}
	if (p->map[i][j + 1] != '1' && p->map[i][j + 1] != 'E')
	{
		if (p->map[i][j + 1] == 'C')
			p->map[i][j + 1] = '0';
		temp = p->map[i][j + 1];
		p->map[i][j + 1] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
			p->mlx_img = mlx_xpm_file_to_image(p->mlx, "player.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, (j + 1) * 45, i
				* 45);
		p->mlx_img = mlx_xpm_file_to_image(p->mlx, "gras.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, j * 45, i * 45);
	}
	return (0);
}

int	move_left(g_data *p, int a, int *move)
{
	char	temp;
	g_data	pos;
	int		j;
	int		i;

	pos = player_pos(p->map);
	j = pos.x;
	i = pos.y;
	if (a == 1 && p->map[i][j - 1] == 'E')
	{
		printf("number of move %d\n", ++*move);
		printf("You winner nice !!");
		exit(0);
	}
	if (p->map[i][j - 1] != '1' && p->map[i][j - 1] != 'E')
	{
		if (p->map[i][j - 1] == 'C')
			p->map[i][j - 1] = '0';
		temp = p->map[i][j - 1];
		p->map[i][j - 1] = p->map[i][j];
		p->map[i][j] = temp;
		printf("number of move %d\n", ++*move);
			p->mlx_img = mlx_xpm_file_to_image(p->mlx, "player.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, ( j - 1) * 45, i
				* 45);
		p->mlx_img = mlx_xpm_file_to_image(p->mlx, "gras.xpm", &p->whidt,
				&p->height);
		mlx_put_image_to_window(p->mlx, p->mlx_win, p->mlx_img, j * 45, i * 45);
	}
	return (0);
}
