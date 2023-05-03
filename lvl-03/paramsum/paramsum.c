
#include<unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

int	main(int argc, char **argv)
{
	(void)argc;

	if (!argc)
		write(1, "0\n", 2);
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}
