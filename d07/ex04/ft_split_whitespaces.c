<<<<<<< HEAD
char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	char **str_array;

	i = 0;
	j = 0;
	x = 1;
	while (str[i] != '\0')
	{
		j++;
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0' || str[i + 1] == '\0') && x == 1)
		{
			int k;
			k = 0;
			**str_array = (char**)malloc((j) * sizeof(char*));
			while (j > 0)
			{
				*str_array[j - k] = str[i - k]
				k++;
			}
			j = 0;
			x = 0;
			(*str_array)++;
		}
		if ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n') && (str[i] != '\0') && x == 0)
			x = 1;
		str++;
	}
	(*str_array) = '0';
	return (str_array);
=======
char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	char **str_array;

	i = 0;
	j = 0;
	x = 1;
	while (str[i] != '\0')
	{
		j++;
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0' || str[i + 1] == '\0') && x == 1)
		{
			int k;
			k = 0;
			**str_array = (char**)malloc((j) * sizeof(char*));
			while (j > 0)
			{
				*str_array[j - k] = str[i - k]
				k++;
			}
			j = 0;
			x = 0;
			(*str_array)++;
		}
		if ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n') && (str[i] != '\0') && x == 0)
			x = 1;
		str++;
	}
	(*str_array) = '0';
	return (str_array);
>>>>>>> 50cc138a0c11147327c0681c9fc9e5cfa9a07005
}