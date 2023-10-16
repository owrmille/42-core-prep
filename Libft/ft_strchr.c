#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char	*s, int c)
{
	char	*res;
	char	symbol = c;

	res = (char *)s;
	while (*res != symbol)
	{
		if (*res == '\0')
			return (NULL);
		res++;
	}
	return res;
}