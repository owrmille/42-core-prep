#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t n)
	{
		const char	*c_s1 = (const char *)s1;
		const char	*c_s2 = (const char *)s2;
		int	i;

		i = 0;
		while ((c_s1[i] == c_s2[i]) && ((size_t)i < n - 1))
			i++;
		return (c_s1[i] - c_s2[i]);
	}