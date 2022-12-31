/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tck.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 03:55:58 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/12/31 06:07:30 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	message_error(void)
{
	printf("--------------------\n");
	printf("| This map invalid |\n");
	printf("--------------------\n");
	exit(0);
}
void	map_tck_c_e_p(int a, int b, int c)
{
	if (a < 1 || b != 1 || c != 1)
		message_error();
}
void	map_tck_wall(char **str, int y, int x)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[0][i])
	{
		if (str[0][i] != '1')
			message_error();
		i++;
	}
	i = 0;
	while (str[y - 1][i])
	{
		if (str[y - 1][i] != '1')
			message_error();
		i++;
	}
	i = 1;
	while (str[i] && i < y)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][0] != '1' || str[i][x - 1] != '1')
				message_error();
			else if (!ft_strchr("PCE10", str[i][j]))
				message_error();
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
		if (ft_strlen(str[i]) != len)
			message_error();
		i++;
	}
}
