/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 21:55:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 00:58:09 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"
# include <errno.h>
# include <mlx.h>
# include <string.h>

typedef struct grafique_data
{
	void		*mlx;
	void		*mlx_win;
	void		*mlx_img;
	char		**map;
	const char	**tab_check;
	int			whidt;
	int			height;
	int			x;
	int			y;
	int			cont_c;
	int			cont_p;
	int			cont_e;
	int			fd;

}				data;

typedef struct data_geniral
{
	data		g;
	data		k;
	data		tck;
	data		player;
	data		tableu_check;
	const char	**tableau_2d;
}				data_geniral;

data			read_map_on_split(char *pate);
int				move_up(data *p, int a, int *move);
int				move_down(data *p, int a, int *move);
int				move_right(data *p, int a, int *move);
int				move_left(data *p, int a, int *move);
data			player_pos(char **c);
void			change_map_img(char **k, data *g);
data			cont(char **str);
void			map_tck_c_e_p(int a, int b, int c);
void			map_tck_wall(char **str, int j, int x);
void			map_tck_rectangular(char **str, int len);
void			map_tck_new_line(char *str);
void			check_path_c(const char **str, data_geniral giniral);
void			check_path_e(const char **tab, data_geniral giniral);
void			display_wall(int i, int j, data *g);
void			display_gras(int i, int j, data *g);
void			display_player(int i, int j, data *g);
void			display_exit(int i, int j, data *g);
void			display_colection(int i, int j, data *g);

#endif
