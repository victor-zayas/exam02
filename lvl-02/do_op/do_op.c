
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int one = 0;
	int three = 0;
	int result = 0;

	if (argc == 4)
	{
		one = atoi(argv[1]);
		three = atoi(argv[3]);
		if (argv[2][i] == '+')
			result = one + three;
		if (argv[2][i] == '-')
			result = one - three;
		if (argv[2][i] == '*')
			result = one * three;
		if (argv[2][i] == '/')
			result = one / three;
		if (argv[2][i] == '%')
			result = one % three;
		printf("%d", result);
	}
	write(1, "\n", 1);
}
