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
	k.map = ft_split(str, '\n');
	i = 0;
	k.x = ft_strlen(k.map[0]);
	while (k.map[i])
		i++;
	k.y = i;
	return (k);
}
