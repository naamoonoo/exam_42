int	ft_atoi(const char *str)
{
	int		i;
	int		ans;
	int		is_neg;

	i = 0;
	ans = 0;
	is_neg = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if(str[i] == '-' || str[i] == '+')
		is_neg = str[i++] == '-' ? 1 : 0;
	while(str[i] >= '0' && str[i] <= '9')
		ans = ans * 10 + (str[i++] - '0');
	return (is_neg == 1 ? ans * -1 : ans);
}

