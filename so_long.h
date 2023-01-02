/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 21:55:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/01/02 07:44:36 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"
# include <errno.h>
# include <mlx.h>
# include <string.h>
typedef struct pos_wall
{
	int		x;
	int		y;
}			p_wall;

typedef struct grafique_data
{
	void	*mlx;
	void	*mlx_win;
	void	*mlx_img;
	char	**map;
	int		whidt;
	int		height;
	int		x;
	int		y;
	int		cont_c;
	int		cont_p;
	int		cont_e;
	int		fd;

}			g_data;

g_data		read_map_on_split(void);
int			move_up(g_data *p, int a, int *move);
int			move_down(g_data *p, int a, int *move);
int			move_right(g_data *p, int a, int *move);
int			move_left(g_data *p, int a, int *move);
g_data		player_pos(char **c);
void		change_map_img(char **k, g_data *g);
g_data		cont(char **str);
void		map_tck_c_e_p(int a, int b, int c);
void		map_tck_wall(char **str, int j, int x);
void		map_tck_rectangular(char **str, int len);
void		map_tck_new_line(char *str);
void		check_path_c(g_data g, int i, int j);

#endif
