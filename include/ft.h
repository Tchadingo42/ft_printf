/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbelan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 17:00:46 by chbelan           #+#    #+#             */
/*   Updated: 2019/01/28 19:07:41 by chbelan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdarg.h>

typedef struct				s_flags
{
		char	flag;
		void	(*func)(va_list);
}							t_flags;

void						ch_flag(const char *format, int i, va_list list);
int							ft_printf(const char *format, ...);
void						ft_putchar(char c);
void						ft_putnbr_disp(int nb);
void						ft_putnbr(int nb);
void						ft_putnbr_bin(unsigned int nb);
void						ft_putnbr_hexa(int nb);
void						ft_putnbr_octal(int nb);
void						ft_putstr(char *str);
void						ft_putstr_bis(char *str);
int							ft_strlen(char *str);

#endif
