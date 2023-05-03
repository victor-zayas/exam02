
#include<stdlib.h>

int	*ft_range(int start, int end)
{
	int len = abs((end - start) + 1);
	int i = 0;
	int	*aux;

	aux = malloc(sizeof(int) * len);
	if (!aux)
		return (0);
	while (i < len)
	{
		if (start < end)
		{
			aux[i] = start;
			start++;
			i++;
		}
		else
		{
			aux[i] = start;
			start--;
			i++;
		}
	}
	return (aux);
}
