/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:20:51 by dekhamid          #+#    #+#             */
/*   Updated: 2024/10/22 16:57:00 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexa(unsigned long int n)
{
	if (n >= 16)
	{
		ft_hexa(n / 16);
		ft_hexa(n % 16);
	}
	else
	{
		if (n > 9)
			n = n + 87;
		else
			n = n + 48;
		write(1, &n, 1);
	}
}

int	ft_putvoid(unsigned long long n)
{
	unsigned long long	x;
	int					y;

	y = 1;
	x = n;
	if (x == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_hexa(n);
	while (x >= 16)
	{
		x = x / 16;
		y++;
	}
	return (y + 2);
}
