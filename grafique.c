/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grafique.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:02:47 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/07 18:20:56 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image(char c, int i, int j, t_data *g)
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

void	change_map_img(char **k, t_data *g)
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

char	*read_map_1(char *path_1)
{
	int		fd;
	char	*a;
	char	*str;

	fd = open(path_1, O_RDWR);
	while ((a = get_next_line(fd)))
		str = ft_strjoin(str, a);
	path_file(fd,path_1);
	free(a);
	close(fd);
	return (str);
}
