#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 10)
		ft_putchar(n + 10);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}	
}

int main(int ac, char *av[])
{
	int len;

	len = 0;
	while (*av++)
		len++;
	if (len == av)
		ft_putnbr(ac -1 );
	write(1, "\n", 1);
	return (0);
}