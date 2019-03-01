void	ft_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	
	i = -1;
	len = ft_strlen(str);
	while (++i < len / 2)
		ft_swap(&str[i], &str[len - i - 1]);
	return (str);
}

