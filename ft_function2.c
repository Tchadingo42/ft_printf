#include <stdarg.h>
#include "./include/ft_printf.h"

void	ft_putstr_bis_pf(va_list list)
{
	ft_putstr_bis(va_arg(list,char *));
}

void	ft_putnbr_octal_pf(va_list list)
{
	ft_putnbr_octal(va_arg(list, int));
}
