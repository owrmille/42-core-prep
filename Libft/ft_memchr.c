#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	int	i;
	const char	*res = (const char	*)s;

	i = 0;
	while ((size_t)i < n)
	{
		if (res[i] == c)
			return (void *)(res + i);
		i++;
	}
	return (NULL);
}