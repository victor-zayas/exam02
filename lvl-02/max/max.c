
int	max(int *tab, unsigned int len)
{
	int	aux = -2147483648;
	int	i = 0;

	while (i < len)
	{
		if (tab[i] > aux)
			aux = tab[i];
		i++;
	}
	return (aux);
}
