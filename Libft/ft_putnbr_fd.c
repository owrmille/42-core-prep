#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	printed_digit;
	int	new_nb;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		new_nb = n;
		if (new_nb / 10 != 0)
		{
			ft_putnbr_fd(new_nb / 10, fd);
		}
		printed_digit = (new_nb % 10) + '0';
		write(fd, &printed_digit, 1);
	}
}