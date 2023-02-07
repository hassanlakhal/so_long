/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:42:08 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 21:29:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (dstsize == 0)
		return (len);
	while (len && i < (dstsize - 1))
	{
		dst[i] = src[i];
		if (dst[i] == '\0')
			break ;
		i++;
	}
	dst[i] = '\0';
	return (len);
}
