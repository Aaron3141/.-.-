
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_str;

	i = 0;
	while (src[i])
		i++;
	new_str = (char*)malloc((i + 1) * sizeof(*new_str));
	//new_str = malloc((i + 1) * sizeof(*new_str));
	if (new_str == NULL)
		return (NULL);
	i = 0; 
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
