
#include<unistd.h>

int	ft_union(char *str, char c, int pos)
{
	int i = 0;

	while (i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		i--;
		while (k <= i)
		{
			if (!(ft_union(argv[1], argv[1][k], k)))
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
}
