/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grafique.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:02:47 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/12/31 06:04:24 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	change_map_img(char **k, g_data *g)
{
	int	j;
	int	i;

	i = 0;
	while (k[i])
	{
		j = 0;
		while (k[i][j])
		{
			if (k[i][j] == '1')
			{
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "wall1.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
			}
			if (k[i][j] == '0')
			{
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "gras.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
			}
			if (k[i][j] == 'P')
			{
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "gras.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "player.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
			}
			if (k[i][j] == 'E')
			{
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "gras.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "exit.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
			}
			if (k[i][j] == 'C')
			{
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "gras.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
				g->mlx_img = mlx_xpm_file_to_image(g->mlx, "colection.xpm",
						&g->whidt, &g->height);
				mlx_put_image_to_window(g->mlx, g->mlx_win, g->mlx_img, j * 45,
						i * 45);
			}
			j++;
		}
		i++;
	}
}
int	key_hook(int keycode, g_data *vars)
{
	static int	c;
	static int	move;
	g_data		d;
	int			a;

	a = 0;
	d = cont(vars->map);
	if (keycode == 53)
	{
		printf("--- Exit by ESC ---\n");
		exit(0);
	}
	if (!d.cont_c)
		a++;
	if (keycode == 126)
		move_up(vars, a, &move);
	if (keycode == 125)
		move_down(vars, a, &move);
	if (keycode == 124)
		move_right(vars, a, &move);
	if (keycode == 123)
		move_left(vars, a, &move);
	return (c);
}
int ft_exit(g_data g)
{
	printf("--- Exit by X ---\n");
	exit(0);
}
int	main(void)
{
	g_data	g;
	g_data	k;
	g_data	tck;

	g = read_map_on_split();
	tck = cont(g.map);
	map_tck_c_e_p(tck.cont_c,tck.cont_e,tck.cont_p);
	map_tck_wall(g.map,g.y,g.x);
	map_tck_rectangular(g.map,g.x);
	g.mlx = mlx_init();
	g.mlx_win = mlx_new_window(g.mlx, 45 * g.x, 45 * g.y, "so_long");
	change_map_img(g.map, &g);
	mlx_hook(g.mlx_win, 2, 0, key_hook, &g);
	mlx_hook(g.mlx_win, 17, 0, ft_exit, &g);
	mlx_loop(g.mlx);
}
