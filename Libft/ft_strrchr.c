#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*res;
	char	symbol;
	char	*last_appear;
	int	i;

	symbol = c;
	res = (char *)s;
	i = 0;
	while (*res != '\0')
	{
		while (*res != symbol)
		{
			if (*res == '\0')
			{
				if (i == 0)
					return (NULL);
				else if (i > 0)
					return (last_appear);
			}
			res++;
		}
		i++;
		last_appear = res;
		res++;
	}
	return res;
}