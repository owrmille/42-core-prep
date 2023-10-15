#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char	*restrict dst, const char	*restrict src, size_t dstsize)
{
	char const	*s;
	char	*d;
	char	*end_d;

	s = src;
	d = dst;
	end_d = dst + dstsize;

	while (*s != '\0' && end_d > d)
	{
		*d = *s;
		d++;
		s++;
	}
	if (end_d > d)
	{
		*d = '\0';
	}
	else if (dstsize > 0)
	{
		d[-1] = '\0';
	}
	while (*s != '\0')
		s++;
	return (s - src);
}