/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 03:55:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/08 00:53:33 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	message_error(char *str)
{
	write(2, "Error\n", 7);
	ft_putstr_fd(str, 2);
	exit(0);
}

void	map_tck_c_e_p(int a, int b, int c)
{
	if (a < 1 || b != 1 || c != 1)
		message_error("Preblem in number of P or E or C\n");
}

void	map_tck_wall(char **str, int y, int x)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	i = 0;
	while (str[i] && i < y)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[0][j] != '1' || str[i][x - 1] != '1' || str[y
				- 1][j] != '1')
				message_error("Preblem in wall\n");
			else if (!ft_strchr("PCE10", str[i][j]))
				message_error("Preblem in invalide character\n");
			j++;
		}
		i++;
	}
}

void	map_tck_rectangular(char **str, int len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((int)ft_strlen(str[i]) != len)
			message_error("Map is not rectangular\n");
		i++;
	}
}

void	map_tck_new_line(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\n')
		message_error("Problem new line\n");
	while (str[i])
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
			message_error("Problem new line\n");
		i++;
	}
}
