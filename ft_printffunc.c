#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar_count(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr_basest(size_t nbr, char *base)
{
	unsigned int	len;
	int		count;

	len = ft_strlen(base);
	count = 0;
	if (nbr >= len)
		count += ft_putnbr_basest((nbr / len), base);
	count += ft_putchar_count(base[nbr % len]);
	return (count);
}

int		ft_putnbr_baseptr(unsigned long long nbr, char *base)
{
	unsigned int	len;
	int		count;

	len = ft_strlen(base);
	count = 0;
	if (nbr >= len)
		count += ft_putnbr_baseptr((nbr / len), base);
	count += ft_putchar_count(base[nbr % len]);
	return (count);
}
