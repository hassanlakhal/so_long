/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parte.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:16:41 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/01/02 08:41:08 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check(char **str, g_data g, int i, int j)
{

		if (j < 0 || i < 0 || i > g.y || j > g.x)
			return ;
		if (str[i][j] == '1' || str[i][i] == 'E' || str[i][j] == 'x')
			return ;
		if (str[i][j] == 'C' || str[i][j] == '0' || str[i][j] == 'P')
		{
			str[i][j] = 'x';
			check(str, g, i + 1, j);
			check(str, g, i, j + 1);
			check(str, g, i - 1, j);
			check(str, g, i, j - 1);
		}

}

char **strjoin_map(char **str)
{
	int cont;
	cont = 0;
	char **tab;
	while (str[cont])
		cont++;
	tab = ft_calloc((cont + 1),sizeof(char));
	cont = 0;
	while (str[cont])
	{
		tab[cont] = ft_strdup(str[cont]);
		cont++;
	}
	tab[cont] = "\0";
	return tab;
}

void check_path_c(g_data g,int i,int j)
{
	int k;
	k = 0;
	char **str = strjoin_map(g.map);
	check(str, g, i, j);
	while (k <= g.y)
	{

		if (ft_strchr(str[k],'C'))
		{
			printf("trik ma9to3a");
			exit(0);
		}
		k++;
	}
}
