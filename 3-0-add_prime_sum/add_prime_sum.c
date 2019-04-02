#include <unistd.h>

int ft_atoi(char *s)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	if (s[i] == '-')
		return (0);
	if (s[i] == '+')
		i++;
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + (s[i] - 48);
		i++;
	}
	return (res);
}

void ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int is_prime(int n)
{
	int i;

	i = 3;
	if (n == 2 || n == 3)
		return (n);
	if (n % 2 == 0)
		return (0);
	while (i <= (n / 2))
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (n);
}

int main(int ac, char *av[])
{
	int res;
	int limit;

	res = 0;
	limit = 0;
	if (ac != 2 || av[1][0] == '-')
		write(1, "0", 1);
	else
	{
		limit = ft_atoi(av[1]);
		while (1 < limit)
			res += is_prime(limit--);
		ft_putnbr(res);
	}
	write(1, "\n", 1);
	return (0);
}
