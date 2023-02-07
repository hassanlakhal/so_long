/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 02:36:21 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 21:29:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char const *src)
{
	char	*new;
	int		len;
	int		i;

	if (!src)
		return (NULL);
	len = ft_strlen(src) + 1;
	i = 0;
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (0);
	else
	{
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}

int	ft_search(char const *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}
