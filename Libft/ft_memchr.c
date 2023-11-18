#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)s;
	while (i < n)
	{
		if ((unsigned char)res[i] == (unsigned char)c)
			return (void *)(res + i);
		i++;
	}
	return (NULL);
}