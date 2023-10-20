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
char map_func(unsigned int index, char c)
{
	return (index % 2 == 0) ? '_' : c;
}

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
			printf("string: (%s), start: (%d), len: (%zu)\n", s1, start, len);
			printf("ft_substr: (%s)\n", res);
			if (res)
			{
				free(res);
			}
		}
		else if (!strcmp(function_name, "ft_strjoin"))
		{
			char	*s1 = "Join me ";
			char	*s2 = "please";
			char	*res = ft_strjoin(s1, s2);
			if (!res)
			{
				return (0);
			}
			printf("string 1: (%s), string 2: (%s)\n", s1, s2);
			printf("ft_strjoin: (%s)\n", res);
			if (res)
			{
				free(res);
			}
		}
		else if (!strcmp(function_name, "ft_strtrim"))
		{
			char	*s1 = "***_!!wow! *omg*_";
			char	*set = "*!_";
			char	*res = ft_strtrim(s1, set);
			if (!res)
			{
				return (0);
			}
			printf("string: (%s), set: (%s)\n", s1, set);
			printf("ft_strtrim: (%s)\n", res);
			if (res)
			{
				free(res);
			}
		}
		else if (!strcmp(function_name, "ft_strmapi"))
		{
			// char *s = "123456789";
			// char *s = NULL;
			// char *s = "\0";
			char s[] = "123456789";
			char *res = ft_strmapi(s, map_func);
			if (!res)
			{
				return (0);
			}
			printf("ft_strmapi: (%s)\n", res);
			if (res)
			{
				free(res);
			}
		}
	}
	return (0);
}