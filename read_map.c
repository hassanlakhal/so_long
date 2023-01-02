/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:17:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/01/01 23:17:15 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

g_data	read_map_on_split(void)
{
	g_data		k;
	int		i;
	char	*a;
	char	*str;

	i = 0;
	str = NULL;
	k.fd = open("map.ber", O_RDWR);
	while ((a = get_next_line(k.fd)))
		str = ft_strjoin(str, a);
	free(a);
	map_tck_new_line(str);
	k.map = ft_split(str, '\n');
	free(str);
	i = 0;
	k.x = ft_strlen(k.map[0]);
	while (k.map[i])
		i++;
	k.y = i;
	return (k);
}
