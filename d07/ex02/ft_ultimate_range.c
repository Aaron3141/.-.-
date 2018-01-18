
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min < max)
	{
		*range = (int*)malloc((max - min) * sizeof(**range));
		i = 0;
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (i);
	}
	*range = NULL;
	return (0);
}
