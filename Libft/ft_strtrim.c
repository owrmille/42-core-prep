#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*res;
	int i;
	int j;
	int k;

	res = NULL;
	if (s1 != NULL)
	{
		i = 0;
		j = ft_strlen(s1) - 1;
		k = 0;
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (s1[j] != '\0' && ft_strchr(set, s1[j]) && j > i)
			j--;
		res = (char	*)malloc(sizeof(char) * (j - i + 2));
		if (!res)
			return (NULL);
		while (k + i <= j)
		{
			res[k] = s1[k + i];
			k++;
		}
		res[k] = '\0';
	}
	return (res);
}