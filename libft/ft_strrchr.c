/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:10:09 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 21:29:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	unsigned char	*ret;
	int				i;
	unsigned char	j;

	ret = NULL;
	i = 0;
	if (c >= 255)
	{
		j = (unsigned char)c;
		if (j == 0)
			return (ft_strchr(s, 0));
	}
	else
		j = c;
	while (s[i])
	{
		if (s[i] == j)
			ret = (unsigned char *)(s + i);
		i++;
	}
	if (c == '\0')
		ret = (unsigned char *)(s + i);
	return ((char *)(ret));
}
