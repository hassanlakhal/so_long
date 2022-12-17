/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:33:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2022/11/02 19:42:19 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (s[0] != (char)c)
	{
		if (s[0] == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}