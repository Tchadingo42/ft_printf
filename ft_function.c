/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:00:11 by chbelan           #+#    #+#             */
/*   Updated: 2019/01/28 17:00:13 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./include/ft_printf.h"

void	ft_putchar_pf(va_list list)
{
	ft_putchar(va_arg(list, int));
}

void	ft_putstr_pf(va_list list)
{
	ft_putstr(va_arg(list, char *));
}

void	ft_putnbr_pf(va_list list)
{
	ft_putnbr(va_arg(list, int));
}

void	ft_putnbr_bin_pf(va_list list)
{
	ft_putnbr_bin(va_arg(list, int));
}

void	ft_putnbr_hexa_pf(va_list list)
{
	ft_putnbr_hexa(va_arg(list, int));
}
