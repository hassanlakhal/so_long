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

int check_wall(char  *tab,char *str, int len, int pos)
 {
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	a = 0;
	if (!tab)
		return 0;
	if(pos == 0 )
	{
		while (tab[i] )
		{
			if (tab[i] == '1')
				j++;
			i++;
		}
		i = j;
		if (j == ft_strlen(tab))
			j = 1;
		else
			j = 0;
	}
	if (pos  >= 1 && pos < len - 1)
	{
		if(tab[0] == '1' && tab[ft_strlen(tab) - 1] == '1')
			a++;
		if(a == 1)
			j = 1;
		else
			j = 0;
	}
	if (pos == len - 1)
	{
		if (!ft_memcmp(tab,str,ft_strlen(tab)) && i == ft_strlen(str))
		{
			j = 1;
		}
		else
			 j = 0;
	}
	return j;
 }

 int main()
 {
	int fd = open("map.dev",O_RDWR);
	char *str = read_map(fd);
	char **tab;
	tab = ft_split(str,'\n');
	int i;
	i = 0;
	int j = 0;

	//check_wall(tab[1]);
while (tab[j])
 	j++;
while (i < j - 1)
{
		//printf("%d",check_wall(tab[i],tab[j - 1],j,i));
		//check_wall(tab[i],tab[j - 1],j,i);
		i++;
}
	//check_wall(tab[0],tab[j - 1],j,i);
	printf("%d",check_wall(tab[0],tab[j - 1],j,i - 1));
}

// 	s = malloc(sizeof(char) * j);
// 	while (i < j)
// 	{
// 		s[i] = check_wall(tab[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < j)
// 	{
// 		printf("%d\n",s[i]);
// 		i++;
// 	}
// if(tab[0] == '1' && tab[ft_strlen(tab) - 1] == '1')
// 		a++;
// 	if (j == ft_strlen(tab))
// 		temp[0] = 1;
// 	if(a == 1)
// 		temp[1] = 2;
// 	if (temp[0] == 1 || temp[1] == 2)
// 		return 1;
//else
//		return 0;

