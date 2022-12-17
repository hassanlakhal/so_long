#include<unistd.h>
#include<stdio.h>
#include"get_next_line.h"
#include"./libft/libft.h"
 char *read_map(int fd)
 {
	char *a;
	char *str;
	str = NULL;
	while ((a = get_next_line(fd)))
		str = ft_strjoin(str,a);
	free(a);
	return str;
 }

int check_map(char  *tab)
 {
	int i;
	int j;
	int a;
	int b;

	i = 0;
	j = 0;
	a = 0;
	b = 0;
	while (tab[i])
	{
		if (tab[i] == '1')
			j++;
		i++;
	}
	if(tab[0] == '1' && tab[ft_strlen(tab) - 1] == '1')
		a++;
	if (j == ft_strlen(tab) || a == 1)
		return 1;
	else
		return 0;
 }
 int main()
 {
	int fd = open("map.dev",O_RDWR);
	char *str = read_map(fd);
	char **tab;
	tab = ft_split(str,'\n');
	int i;
	i = 0;
	while (i < 5)
	{
		printf("%d\n",check_map(tab[i]));
		i++;
	}
 }
