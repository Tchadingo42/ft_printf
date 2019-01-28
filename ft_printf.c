#include <stdarg.h>
#include "./include/ft_printf.h"

t_flags	flags[] =
  {
    {'d', &ft_putnbr_pf},
    {'s', &ft_putstr_pf},
    {'c', &ft_putchar_pf},
    {'b', &ft_putnbr_bin_pf},
    {'S', &ft_putstr_bis_pf},
    {'x', &ft_putnbr_hexa_pf},
    {'o', &ft_putnbr_octal_pf},
  };

void	ch_flag(const char *format, int i, va_list list)
{
  int	a;
  int	b;

  a = 0;
  b = 7;
  while ((a < b) && (flags[a].flag != format[i]))
    a = a + 1;
  if (a == b)
    {
      ft_putchar('%');
      ft_putchar(format[i]);
    }
  else
    flags[a].func(list);
}

int	ft_printf(const char *format, ...)
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
