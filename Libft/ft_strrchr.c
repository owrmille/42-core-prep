#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*res;
	char	symbol;
	int len;

	symbol = c;
	res = (char *)s;
	len = ft_strlen(res);
	while (len >= 0)
	{
		if (*(res+len) == (char)symbol)
			return (res + len);
		len--;
	}
	return (NULL);

}