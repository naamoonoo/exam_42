int		get_start_idx(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' &&
			str[i] != '\f' && str[i] != '\r' && str[i] != '\b')
			break;
	return (i);
}

char	handle_upper(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return '\0';
}

int		ft_strchr(char *str, char c)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

char *make_base(char *base, int str_base)
{
	int i;
	char base_set[] = "0123456789abcdef";

	i = -1;
	while (++i < str_base)
		base[i] = base_set[i];
	base[i] = '\0';
	return (base);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int ans;
	int is_minus;
	char base[str_base + 1];

	i = get_start_idx((char *)str);
	is_minus = 0;
	ans = 0;
	make_base(base, str_base);
	if (str[i] == '-' || str[i] == '+')
		is_minus = str[i++] == '-' ? 1 : 0;
	while (str[i] && handle_upper(str[i]))
	{
		if (ft_strchr(base, handle_upper(str[i])) < 0)
			return (0);
		else
			ans = ans * str_base + ft_strchr(base, handle_upper(str[i++]));
	}
	return (is_minus ? ans * -1 : ans);
}
