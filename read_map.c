/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:17:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 00:51:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

data	read_map_on_split(char *path)
{
	data	k;
	int		i;
	char	*a;
	char	*str;

	i = 0;
	str = NULL;
	k.fd = open(path, O_RDWR);
	while (path[i])
	{
		if (path[i] == '.')
		{
			if (ft_memcmp(path + i, ".ber", ft_strlen(path + i)))
			{
				write(1, "file not exit\n", 15);
				exit(0);
			}
		}
		i++;
	}
	if (k.fd <= 0 || !ft_strnstr(path, ".ber", ft_strlen(path)))
	{
		write(1, "file not exit\n", 15);
		exit(0);
	}
	while ((a = get_next_line(k.fd)))
		str = ft_strjoin(str, a);
	free(a);
	map_tck_new_line(str);
	k.map = ft_split(str, '\n');
	k.tab_check = (const char **)ft_split(str, '\n');
	free(str);
	i = 0;
	k.x = ft_strlen(k.map[0]);
	while (k.map[i])
		i++;
	k.y = i;
	return (k);
}
