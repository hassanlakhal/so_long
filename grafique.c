/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grafique.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:02:47 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 00:51:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image(char c, int i, int j, data *g)
{
	if (c == '1')
		display_wall(i, j, g);
	if (c == '0')
		display_gras(i, j, g);
	if (c == 'P')
		display_player(i, j, g);
	if (c == 'E')
		display_exit(i, j, g);
	if (c == 'C')
		display_colection(i, j, g);
}

void	change_map_img(char **k, data *g)
{
	int	j;
	int	i;

	i = 0;
	while (k[i])
	{
		j = 0;
		while (k[i][j])
		{
			ft_image(k[i][j], i, j, g);
			j++;
		}
		i++;
	}
}

int	key_hook(int keycode, data *vars)
{
	static int	c;
	static int	move;
	data		d;
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
int	ft_exit(data g)
{
	printf("--- Exit by X ---\n");
	exit(0);
}
int	main(int argc, char **argv)
{
	data_geniral giniral;

	giniral.g = read_map_on_split(argv[1]);
	giniral.tableu_check = read_map_on_split(argv[1]);
	giniral.tableau_2d = giniral.tableu_check.tab_check;
	giniral.tck = cont(giniral.g.map);
	giniral.player = player_pos(giniral.g.map);
	map_tck_c_e_p(giniral.tck.cont_c, giniral.tck.cont_e, giniral.tck.cont_p);
	map_tck_wall(giniral.g.map, giniral.g.y, giniral.g.x);
	map_tck_rectangular(giniral.g.map, giniral.g.x);
	check_path_c(giniral.tableau_2d, giniral);
	check_path_e(giniral.tableau_2d, giniral);
	giniral.g.mlx = mlx_init();
	giniral.g.mlx_win = mlx_new_window(giniral.g.mlx, 45 * giniral.g.x, 45 * giniral.g.y, "so_long");
	change_map_img(giniral.g.map, &giniral.g);
	mlx_hook(giniral.g.mlx_win, 2, 0, key_hook, &giniral.g);
	mlx_hook(giniral.g.mlx_win, 17, 0, ft_exit, &giniral.g);
	mlx_loop(giniral.g.mlx);
}
