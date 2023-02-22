/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 21:55:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/22 03:42:13 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./ft_printf/ft_printf.h"
# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"
# include <errno.h>
# include <mlx.h>
# include <string.h>

typedef struct grafique_data
{
	void	*mlx;
	void	*mlx_win;
	void	*mlx_img;
	char	**map;
	char	**tableau_2d;
	int		whidt;
	int		height;
	int		x;
	int		y;
	int		cont_c;
	int		cont_p;
	int		cont_e;
	int		fd;

}			t_data;

typedef struct t_data_geniral
{
	t_data	g;
	t_data	k;
	t_data	tck;
	t_data	player;
	t_data	tableu_check;
	char	*tableau;
	char	**tableau_2d;
	char	**tableau_2d_1;

}			t_data_geniral;

t_data		read_map_on_split(char *pate);
int			move_up(t_data *p, int a, int *move);
int			move_down(t_data *p, int a, int *move);
int			move_right(t_data *p, int a, int *move);
int			move_left(t_data *p, int a, int *move);
t_data		player_pos(char **c);
void		change_map_img(char **k, t_data *g);
t_data		cont(char **str);
void		map_tck_c_e_p(int a, int b, int c);
void		map_tck_wall(char **str, int j, int x);
void		map_tck_rectangular(char **str, int len);
void		map_tck_new_line(char *str);
void		check_path_c(char **str, t_data_geniral giniral);
void		check_path_e(char **tab, t_data_geniral giniral);
void		display_wall(int i, int j, t_data *g);
void		display_gras(int i, int j, t_data *g);
void		display_player(int i, int j, t_data *g);
void		display_exit(int i, int j, t_data *g);
void		display_collectible(int i, int j, t_data *g);
char		*read_map_1(char *path_1);
void		path_file(int a, char *path);

#endif
