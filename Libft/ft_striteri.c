#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned int,
char*))
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while(s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}