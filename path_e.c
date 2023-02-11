/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:38:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/11 23:15:07 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	check(char **str, t_data_geniral giniral, int i, int j)
{
	if (j < 0 || i < 0 || i > giniral.g.y || j > giniral.g.x)
		return ;
	if (str[i][j] == '1' || str[i][j] == 'x')
		return ;
	if (str[i][j] == 'C' || str[i][j] == '0' || str[i][j] == 'P'
		|| str[i][j] == 'E')
	{
		str[i][j] = '*';
		check(str, giniral, i + 1, j);
		check(str, giniral, i, j + 1);
		check(str, giniral, i - 1, j);
		check(str, giniral, i, j - 1);
	}
}

void	check_path_e(char **tab, t_data_geniral giniral)
{
	int	k;

	k = 0;
	check(tab, giniral, giniral.player.y, giniral.player.x);
	while (k < giniral.g.y)
	{
		if (ft_strchr(tab[k], 'E'))
		{
			write(2, "Error\ntrik ma9to3a", 19);
			free((void *)tab[k]);
			exit(0);
		}
		free((void *)tab[k]);
		k++;
	}
}
