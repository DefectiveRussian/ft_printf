/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:28:19 by dekhamid          #+#    #+#             */
/*   Updated: 2024/09/23 19:17:09 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhexa(unsigned long long n, char loworupp)
{
	int	calc;
	int	counter;

	counter = 0;
	if (loworupp == 'x')
		calc = 'a';
	else
		calc = 'A';
	if (n >= 16)
	{
		counter += ft_putnbrhexa(n / 16, loworupp);
		counter += ft_putnbrhexa(n % 16, loworupp);
	}
	else
	{
		if (n <= 9)
			counter += ft_putchar(n + '0');
		else
			counter += ft_putchar(n - 10 + calc);
	}
	return (counter);
}
