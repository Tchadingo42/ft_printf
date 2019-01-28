#include <stdarg.h>

typedef struct s_flags
{
  char	flag;
  void	(*func)(va_list);
}	t_flags;


void	ch_flag(const char *format, int i, va_list list);

int	ft_printf(const char *format, ...);

void	ft_putchar(char c);

void	ft_putnbr_disp(int nb);

void	ft_putnbr(int nb);

void	ft_putnbr_bin(unsigned int nb);

void	ft_putnbr_hexa(int nb);

void	ft_putnbr_octal(int nb);

void	ft_putstr(char *str);

void	ft_putstr_bis(char *str);

int	ft_strlen(char *str);
