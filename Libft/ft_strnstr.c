#include "libft.h"

char	*ft_strnstr(const char	*str, const char	*substr, size_t len)
{
	int	count_str;
	int	count_sub;
	int	match_flg;
	char	*s = (char *)str;
	char	*subs = (char *)substr;

	count_str = 0;
	count_sub = 0;
	match_flg = 0;
	if (subs[0] == '\0')
		return (s);
	while (s[count_str] && len > 0)
	{
		count_sub = 0;
		while (s[count_str + count_sub] == subs[count_sub] && len > 0)
		{
			match_flg = 1;
			if (subs[count_sub + 1] == '\0')
				return (s + count_str);
			count_sub++;
			len--;
		}
		count_str++;
		if (match_flg == 0)
			len--;
		match_flg = 0;
	}
	return (NULL);
}