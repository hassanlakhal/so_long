/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teck.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 02:33:29 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 00:51:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

data	cont(char **str)
{
	data	a;
	int		j;
	int		i;

	i = 0;
	a.cont_c = 0;
	a.cont_p = 0;
	a.cont_e = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == 'C')
				a.cont_c++;
			if (str[i][j] == 'P')
				a.cont_p++;
			if (str[i][j] == 'E')
				a.cont_e++;
			j++;
		}
		i++;
	}
	return (a);
}
