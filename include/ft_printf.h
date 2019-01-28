/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:00:55 by chbelan           #+#    #+#             */
/*   Updated: 2019/01/28 19:08:26 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

typedef	struct		s_flags
{
		char	flag;
		void	(*func)(va_list);
}					t_flags;

void				ft_putchar_pf(va_list list);
void				ft_putstr_pf(va_list list);
void				ft_putnbr_bin_pf(va_list list);
void				ft_putnbr_pf(va_list list);
void				ft_putnbr_hexa_pf(va_list list);
void				ft_putstr_bis_pf(va_list list);
void				ft_putchar(char c);
void				ft_putnbr_octal_pf(va_list list);
void				ft_putnbr_octal(int nb);
void				ch_flag(const char *format, int i, va_list list);
int					ft_printf(const char *format, ...);
void				ft_putchar(char c);
void				ft_putnbr_disp(int nb);
void				ft_putnbr(int nb);
void				ft_putnbr_bin(unsigned int nb);
void				ft_putnbr_hexa(int nb);
void				ft_putnbr_octal(int nb);
void				ft_putstr(char *str);
void				ft_putstr_bis(char *str);
int					ft_strlen(char *str);

#endif
