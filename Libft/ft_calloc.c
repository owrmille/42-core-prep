#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_space;
	size_t total_size;

	total_size = size * count;
	allocated_space = malloc(total_size);
	if (!allocated_space)
	{
		return (NULL);
	}
	ft_bzero(allocated_space, total_size);
	return (allocated_space);
}