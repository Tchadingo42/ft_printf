/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:01:08 by chbelan           #+#    #+#             */
/*   Updated: 2019/01/28 18:58:46 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_printf.h"
#define BIN "01"
#define OCTAL "01234567"
#define HEXA "01234567ABCDEF"

void			ft_putstr_bis(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ft_putchar('\\');
			ft_putnbr_octal((int)str[i]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

void			ft_putnbr_octal(int nb)
{
	int			size;

	size = 8;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= size - 1)
	{
		ft_putnbr_octal(nb / size);
		ft_putchar(OCTAL[nb % size]);
	}
}

void			ft_putnbr_hexa(int nb)
{
	int	size;

	size = 16;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= size - 1)
	{
		ft_putnbr_hexa(nb / size);
		ft_putchar(HEXA[nb % size]);
	}
}
