#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    int     i;
    va_list ptr;
	unsigned int	count;

	count = 0;
    i = 0;
    va_start(ptr, str);
	while (str[i] )
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_analyze(str[i], ptr);
		}
		else
			count += ft_putchar_count(str[i]);
		i++;
	}
	va_end(ptr);
	return (count);
}

int	ft_analyze(char c, va_list ptr)
{
	if (c == 'c')
		return (ft_putchar_count((char)va_arg(ptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ptr, char*)));
	else if (c == 'p')
		return (ft_print_memory(va_arg(ptr,unsigned long long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_base(va_arg(ptr, int), "0123456789"));
	else if (c == 'u')
		return (ft_putnbru(va_arg(ptr,unsigned int)));
	else if (c == 'x')
		return (ft_putnbr_basest(va_arg(ptr, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_basest(va_arg(ptr, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchar_count(37));
	return (0);
}
