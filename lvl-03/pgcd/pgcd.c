
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	int	one = 0;
	int	two = 0;
	int	res = 0;
	int	div;

	if (argc == 3)
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		while (++res <= one && res <= two)
			if (!(one % res) && !(two % res))
				div = res;
		printf("%d", div);
	}
	printf("\n");
}
