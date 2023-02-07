/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 02:31:52 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/07 23:51:10 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	char	*tab;
	int		len;

	tab = ft_uitoa(nb);
	len = ft_putstr(tab);
	free(tab);
	return (len);
}
