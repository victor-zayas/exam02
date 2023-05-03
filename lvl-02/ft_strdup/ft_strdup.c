
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*aux = NULL;
	int 	i = -1;

	if (!str)
		return (NULL);
	aux = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!aux)
		return (aux);
	while (str[++i])
		aux[i] = str[i];
	aux[i] = '\0';
	return (aux);
}
