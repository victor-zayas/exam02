
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_point
{
	int	x; // str
	int	y; // char
}	t_point;

void	flood_fill(char **tab, t_point size, t_point begin)
{
	tab[begin.y][begin.x] = 'F';
	if (begin.x + 1 < size.x && tab[begin.y][begin.x + 1] == '1')
	{
		begin.x += 1;
		flood_fill(tab, size, begin);
		begin.x -= 1;
	}
	if (begin.x - 1 >= 0 && tab[begin.y][begin.x - 1] == '1')
	{
		begin.x -= 1;
		flood_fill(tab, size, begin);
		begin.x += 1;
	}
	if (begin.y + 1 < size.y && tab[begin.y + 1][begin.x] == '1')
	{
		begin.y += 1;
		flood_fill(tab, size, begin);
		begin.y -= 1;
	}
	if (begin.y - 1 >= 0 && tab[begin.y - 1][begin.x] == '1')
	{
		begin.y -= 1;
		flood_fill(tab, size, begin);
		begin.y += 1;
	}
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100011",
	};
	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");
	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
