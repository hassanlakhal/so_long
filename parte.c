/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parte.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:16:41 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 00:41:53 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check(char **str, data_geniral giniral, int i, int j)
{
	if (j < 0 || i < 0 || i > giniral.g.y || j > giniral.g.x)
		return ;
	if (str[i][j] == '1' || str[i][j] == 'x')
		return ;
	if (str[i][j] == 'C' || str[i][j] == '0' || str[i][j] == 'P')
	{
		str[i][j] = 'x';
		check(str, giniral, i + 1, j);
		check(str, giniral, i, j + 1);
		check(str, giniral, i - 1, j);
		check(str, giniral, i, j - 1);
	}
}

char	**strjoin_map(const char **s1)
{
	int		cont;
	int		len;
	char	**tab;

	cont = 0;
	len = 0;
	while (s1[len])
		len++;
	tab = ft_calloc((len), sizeof(char *));
	while (cont < len)
	{
		tab[cont] = ft_strdup(s1[cont]);
		cont++;
	}
	tab[cont] = ft_calloc(1, 1);
	return (tab);
}

void	check_path_c(const char **tab, data_geniral giniral)
{
	int		k;
	char	**tab1;

	k = 0;
	tab1 = strjoin_map(tab);
	check(tab1, giniral, giniral.player.y, giniral.player.x);
	while (k < giniral.g.y)
	{
		if (ft_strchr(tab1[k], 'C'))
		{
			printf("trik ma9to3a");
			exit(0);
		}
		k++;
	}
}
