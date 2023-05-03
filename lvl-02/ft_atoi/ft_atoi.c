
int	ft_atoi(const char *str)
{
	int	result = 0;
	int	sign = 1;

	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

/* int main(void)
{
	printf("%d\n", ft_atoi("   +1233535454"));
} */