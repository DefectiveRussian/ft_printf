/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:15:51 by dekhamid          #+#    #+#             */
/*   Updated: 2024/09/23 19:32:43 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checker(char xd, va_list listatoo)
{
	int	counter;

	counter = 0;
	if (xd == 'c')
		counter += ft_putchar(va_arg(listatoo, int));
	else if (xd == 's')
		counter += ft_putstr(va_arg(listatoo, char *));
	else if ((xd == 'd') || (xd == 'i'))
		counter += ft_putnbr(va_arg(listatoo, int));
	else if (xd == 'p')
		counter += ft_putvoid(va_arg(listatoo, unsigned long long));
	else if (xd == 'u')
		counter += ft_printuint(va_arg(listatoo, unsigned int));
	else if ((xd == 'x') || (xd == 'X'))
		counter += ft_putnbrhexa(va_arg(listatoo, unsigned int), xd);
	else if (xd == '%')
		counter += ft_putchar('%');
	return (counter);
}

int	ft_printf(const char *strinf, ...)
{
	int		counter;
	int		return_len;
	va_list	lista;

	counter = 0;
	return_len = 0;
	va_start(lista, strinf);
	while (strinf[counter] != '\0')
	{
		if (strinf[counter] == '%')
		{
			return_len += checker(strinf[counter + 1], lista);
			counter = counter + 2;
		}
		else
		{
			write(1, &strinf[counter], 1);
			return_len++;
			counter++;
		}
	}
	va_end(lista);
	return (return_len);
}
