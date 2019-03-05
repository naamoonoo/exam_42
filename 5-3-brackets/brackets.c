#include <unistd.h>

int	is_open_bracket(char c)
{
	return (c == '{' || c == '[' || c == '(');
}

int	is_close_bracket(char c)
{
	return (c == '}' || c == ']' || c == ')');
}

int is_valid_pair(char open, char close)
{
	if (open == '(' && close == ')')
		return (1);
	else if (open == '[' && close == ']')
		return (1);
	else if (open == '{' && close == '}')
		return (1);
	return (0);
}

int ft_brackets(char *str)
{
	int i;
	int o_i;
	int is_opend;

	i = 0;
	o_i = 0;
	is_opend = 0;
	while (str[i])
	{
		if (is_open_bracket(str[i]))
		{
			o_i = i;
			is_opend = 1;
		}
		if (is_close_bracket(str[i]) && is_valid_pair(str[o_i], str[i]))
		{
			str[o_i] = '0';
			str[i] = '0';
			i = 0;
			o_i = 0;
			is_opend = 0;
		}
		if (is_close_bracket(str[i]) && !is_valid_pair(str[o_i], str[i]))
			return (0);
		i++;
	}
	return (is_opend ? 0 : 1);
}

int main(int ac, char *av[])
{
	if (ac >= 2)
	{
		while (*++av)
		{
			if (ft_brackets(*av))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}