/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispaly_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:32:48 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/16 02:31:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	display_wall(int i, int j, t_data *g)
{
	g->mlx_img = mlx_xpm_file_to_image(g->mlx, "textures/wall1.xpm", &g->whidt,
			&g->height);
	if (!g->mlx_img)
	{
		write(2, "Error\nerror in path of image ⛔", 33);
		exit(0);
	}
	mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45, i * 45);
}

void	display_gras(int i, int j, t_data *g)
{
	g->mlx_img = mlx_xpm_file_to_image(g->mlx, "textures/gras.xpm", &g->whidt,
			&g->height);
	if (!g->mlx_img)
	{
		write(2, "Error\nerror in path of image ⛔", 33);
		exit(0);
	}
	mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45, i * 45);
}

void	display_player(int i, int j, t_data *g)
{
	display_gras(i, j, g);
	g->mlx_img = mlx_xpm_file_to_image(g->mlx, "textures/player.xpm", &g->whidt,
			&g->height);
	if (!g->mlx_img)
	{
		write(2, "Error\nerror in path of image ⛔", 33);
		exit(0);
	}
	mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45, i * 45);
}

void	display_exit(int i, int j, t_data *g)
{
	display_gras(i, j, g);
	g->mlx_img = mlx_xpm_file_to_image(g->mlx, "textures/exit.xpm", &g->whidt,
			&g->height);
	if (!g->mlx_img)
	{
		write(2, "Error\nerror in path of image ⛔", 33);
		exit(0);
	}
	mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45, i * 45);
}

void	display_colection(int i, int j, t_data *g)
{
	display_gras(i, j, g);
	g->mlx_img = mlx_xpm_file_to_image(g->mlx, "textures/colection.xpm",
			&g->whidt, &g->height);
	if (!g->mlx_img)
	{
		write(2, "Error\nerror in path of image ⛔", 33);
		exit(0);
	}
	mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45, i * 45);
}
