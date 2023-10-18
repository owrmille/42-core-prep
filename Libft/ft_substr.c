#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t i;

	str = (char *)s;
	if (str == 0)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	i = 0;
	while (str[start + i] != '\0' && i < len && ft_strlen(str) > (int)(start + i))
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}