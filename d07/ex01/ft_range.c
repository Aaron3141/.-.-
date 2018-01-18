
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	//tab = (int*)malloc((max - min) * sizeof(*tab));????
	tab = (int*)malloc((max - min) * sizeof(*int));
	while (min < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
