
#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	sign = 1;
	int	result = 0;

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
	return (result * sign);
}

void	ft_putnbr(int nbr)
{

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	nbr = nbr + '0';
	write(1, &nbr, 1);
}

int	is_prime(int nb)
{
	int	i = 3;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	nb = 0;
	int	sum = 0;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (is_prime(nb))
				sum += (nb + 1);
			nb--;
		}
		ft_putnbr(sum);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
}
