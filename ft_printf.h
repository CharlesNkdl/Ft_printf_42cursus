#ifndef FT_PRINTF_H
# define FT_PRINF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

void	ft_putchar(char c);
int	    ft_analyze(char c, va_list ptr);
int	    ft_print_memory(unsigned long long nbr);
int		ft_putnbru(unsigned int nbr);
int		ft_putnbr_base(int nbr, char *base);
int	    ft_putstr(char *str);
int	    ft_putchar_count(char c);
unsigned int	ft_strlen(char *str);
int     ft_printf(const char *str, ...);
int		ft_putnbr_basest(size_t nbr, char *base);
int		ft_putnbr_baseptr(unsigned long long nbr, char *base);


#endif
