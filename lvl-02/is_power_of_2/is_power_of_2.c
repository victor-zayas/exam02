
#include<stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	nb = 1;

	while (nb <= n)
	{
		if (nb == n)
			return (1);
		nb = nb * 2;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", is_power_of_2(-3));
}
