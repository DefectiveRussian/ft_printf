/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekhamid <dekhamid@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:32:41 by dekhamid          #+#    #+#             */
/*   Updated: 2024/09/23 19:28:39 by dekhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int	ft_printuint(unsigned int n);
int	ft_putnbr(int n);
int	ft_putnbrhexa(unsigned long long n, char loworupp);
int	ft_printf(const char *strinf, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putvoid(unsigned long long n);

#endif