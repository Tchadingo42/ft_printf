/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:00:22 by chbelan           #+#    #+#             */
/*   Updated: 2019/01/28 18:49:00 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./include/ft_printf.h"

void	ft_putstr_bis_pf(va_list list)
{
	ft_putstr_bis(va_arg(list, char *));
}

void	ft_putnbr_octal_pf(va_list list)
{
	ft_putnbr_octal(va_arg(list, int));
}
