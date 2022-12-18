#include "./libft/libft.h"
#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
char	*read_map(int fd)
{
	char	*a;
	char	*str;

	str = NULL;
	while ((a = get_next_line(fd)))
		str = ft_strjoin(str, a);
	free(a);
	return (str);
}

int	check_wall(char *tab, char *str, int len, int pos)
{
	int			i;
	int			j;
	int			a;
	static int	k;

	i = 0;
	j = 0;
	a = 0;
	if (!tab)
		return (0);
	if (pos == 0)
	{
		while (tab[i])
		{
			if (tab[i] == '1')
				k++;
			i++;
		}
		i = j;
		if (k == ft_strlen(tab))
			j = 1;
		else
			j = 0;
	}
	if (pos >= 1 && pos < len - 1)
	{
		if (tab[0] == '1' && tab[ft_strlen(tab) - 1] == '1')
			a++;
		if (a == 1)
			j = 1;
		else
			j = 0;
	}
	if (pos == len)
	{
		if (!ft_memcmp(tab, str, ft_strlen(tab)) && k == ft_strlen(str))
		{
			j = 1;
		}
		else
			j = 0;
	}
	return (j);
}

int	main(void)
{
	int		fd;
	char	*str;
	char	**tab;
	int		i;
	int		j;

	fd = open("map.dev", O_RDWR);
	str = read_map(fd);
	tab = ft_split(str, '\n');
	i = 0;
	j = 0;
	while (tab[j])
		j++;
	while (i < j - 1)
	{
		printf("%d", check_wall(tab[i], tab[j - 1], j, i));
		i++;
	}
	printf("%d", check_wall(tab[0], tab[j - 1], j, i + 1));
}
