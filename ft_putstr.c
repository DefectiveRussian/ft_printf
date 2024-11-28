/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:37:51 by dekhamid          #+#    #+#             */
/*   Updated: 2024/09/19 21:54:14 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[counter])
	{
		write(1, &s[counter], 1);
		counter++;
	}
	return (counter);
}
