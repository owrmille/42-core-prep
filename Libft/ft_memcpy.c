#include "libft.h"

void	*ft_memcpy(void	*restrict dst, const void	*restrict src, size_t n)
{
	int i;

	i = 0;
	while ((size_t)i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return dst;
}