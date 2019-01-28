/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:01:32 by chbelan           #+#    #+#             */
/*   Updated: 2019/01/28 19:38:03 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "./include/ft_printf.h"

t_flags	flags[] =
{
    {'d', &ft_putnbr_pf},
    {'s', &ft_putstr_pf},
    {'c', &ft_putchar_pf},
    {'b', &ft_putnbr_bin_pf},
    {'x', &ft_putnbr_hexa_pf},
    {'o', &ft_putnbr_octal_pf},
  };

void		ch_flag(const char *format, int i, va_list list)
{
	int		current;
	int		elem;
	
	current = 0;
	elem = 6;
	while ((current < elem) && (flags[current].flag != format[i]))
		current+= 1;
	if (current == elem)
	{
		ft_putchar('%');
		ft_putchar(format[i]);
	}
	else
		flags[current].func(list);
}

int			ft_printf(const char *format, ...)
{
	va_list	list;
	int	i;
	
	i = -1;
	va_start(list, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i = i + 1;
			if (format[i] == '%')
				ft_putchar('%');
			else
				ch_flag(format, i, list);
		}
		else
			ft_putchar(format[i]);
	}
	return (0);
}
