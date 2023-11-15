#include "libft.h"

int	count_words(char	*str, char del)
{
	int words_cnt;
	int i;
	int prev_del;

	words_cnt = 0;
	prev_del = 1;
	i = 0;

	while(str[i])
	{
		if (str[i] == del)
			prev_del = 1;
		else if (prev_del == 1)
			words_cnt++;
		if (str[i] != del)
			prev_del = 0;
		i++;
	}
	return (words_cnt);
}