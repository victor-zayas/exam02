
#include<unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int len = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		len = i;
		while (argv[1][--len])
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
}
