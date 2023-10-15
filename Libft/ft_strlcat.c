#include "libft.h"

size_t	ft_strlcat(char	*restrict dst, const char	*restrict src, size_t dstsize)
{
	const char	*s;
	char	*d;
	size_t	space_left;
	int i;
	int dst_fixed_len;

	s = src;
	d = dst;
	i = 0;
	while (d[i] != '\0' && dstsize > (size_t)i)
		i++;
	space_left = dstsize - i;
	dst_fixed_len = i;
	i = 0;
	while (s[i] != '\0' && space_left > 1)
	{
		d[dst_fixed_len + i] = s[i];
		i++;
		space_left--;
	}
	d[-1] = '\0';
	return (dst_fixed_len + ft_strlen(s));
}