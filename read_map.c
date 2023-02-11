/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 23:17:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/11 23:20:50 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	path_file(int a, char *path)
{
	int	i;

	i = 0;
	while (path[i])
	{
		if (path[i] == '.')
		{
			if (ft_memcmp(path + i, ".ber", ft_strlen(path + i)))
			{
				write(1, "Error\n", 7);
				ft_putendl_fd("file not exit", 2);
				exit(0);
			}
		}
		i++;
	}
	if (a <= 0 || !ft_strnstr(path, ".ber", ft_strlen(path)))
	{
		write(2, "Error\n", 7);
		ft_putendl_fd("file not exit", 2);
		exit(0);
	}
}

t_data	read_map_on_split(char *path)
{
	t_data	k;
	int		i;
	char	*a;
	char	*str;

	str = NULL;
	k.fd = open(path, O_RDWR);
	path_file(k.fd, path);
	a = get_next_line(k.fd);
	while (a != NULL)
	{
		str = ft_strjoin(str, a);
		a = get_next_line(k.fd);
		free(a);
	}
	map_tck_new_line(str);
	k.map = ft_split(str, '\n');
	k.tableau_2d = (char **)ft_split(str, '\n');
	free(str);
	i = 0;
	k.x = ft_strlen(k.map[0]);
	while (k.map[i])
		i++;
	k.y = i;
	return (k);
}
