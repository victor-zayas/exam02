
#include<unistd.h>

void	rstr_capitalizer(char *str)
{
	int i = -1;

	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') &&	(str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc >= 2)
	{
		while (++i < argc)
			rstr_capitalizer(argv[i]);
	}
	else
		write(1, "\n", 1);
}
