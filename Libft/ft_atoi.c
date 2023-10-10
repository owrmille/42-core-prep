#include "libft.h"

int	ft_atoi(char	*str)
{
	int	sign_flg;
	int	number;

	sign_flg = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign_flg++;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (!(sign_flg % 2))
		return (number);
	return (-number);
}