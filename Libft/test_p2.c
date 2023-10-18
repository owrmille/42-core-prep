#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

/* How to test:
$make
$cc -Wall -Wextra -Werror -o test test_p2.c -L. -lft
$./test

P.S.
-L. tells the linker to look for libraries in the current directory, 
and -lmylib links with "libmylib.a" (or "mylib.lib" on Windows).
*/

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *function_name = argv[1];
		if (!strcmp(function_name, "ft_substr"))
		{
			// char	*s1 = "meow";
			// unsigned int start = 2;
			// size_t len = 6;
			char	*s1 = "Some random string to get a substr from";
			unsigned int start = 50;
			size_t len = 5;
			char	*res = ft_substr(s1, start, len);
			if (!res)
			{
				return (0);
			}
			if (res)
			{
				free(res);
			}
			printf("string: (%s), start: (%d), len: (%zu)\n", s1, start, len);
			printf("ft_substr: (%s)\n", res);
		}
		// else if (!strcmp(function_name, "strlen"))
		// {
		// 	printf("ft_strncmp: (%d)\n", ft_strncmp(s1, s2, 6));
		// }
	}
	return (0);
}