int	ft_atoi(char *str)
{
	int rs = 0;
	int sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		rs = rs * 10 + *str - '0';
		str++;
	}
	return (rs * sign);
}
