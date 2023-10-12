#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

/* How to test:
$make
$cc -Wall -Wextra -Werror -o test test.c -L. -lft
$./test

P.S.
-L. tells the linker to look for libraries in the current directory, 
and -lmylib links with "libmylib.a" (or "mylib.lib" on Windows).
*/

typedef int (*FunctionCallback)(int);
FunctionCallback int_ft_functions[] = {&ft_isalpha,
								&ft_isdigit,
								&ft_isalnum,
								&ft_isascii,
								&ft_isprint,
								&ft_toupper,
								&ft_tolower};

typedef int (*FunctionCallback)(int);
FunctionCallback int_orig_functions[] = {&isalpha, 
								&isdigit,
								&isalnum,
								&isascii,
								&isprint,
								&toupper,
								&tolower};

int	main()
{
	// int var = 97;
	// const int	funcs_num = 7;
	// char	*funcs_names[funcs_num] = {"isalpha",
	// 				"isdigit",
	// 				"isalnum",
	// 				"isascii",
	// 				"isprint",
	// 				"toupper",
	// 				"tolower"};
	// int i = 0;
	// printf("\nVariable: %d or %c\n\n", var, var);
	// while (i < funcs_num)
	// {
	// 	printf("Function: %s, Result: %d", 
	// 			funcs_names[i], int_ft_functions[i](var));
	// 	if (strcmp(funcs_names[i], "toupper") == 0 || strcmp(funcs_names[i], "tolower") == 0)
	// 		printf(" or %c", int_ft_functions[i](var));
	// 	if (int_ft_functions[i](var) == int_orig_functions[i](var))
	// 		printf("\nSUCCESS: original and ft results matched!\n\n");
	// 	else
	// 		printf("\nFAIL: check your ft function.\n\n");
	// 	i++;
	// }
	
	// ft_strlen
	// printf("Length of 'meow': %d\n", ft_strlen("meow"));
	
	//ft_memset
	// this does not work due to (BUS ERROR: 10):
	//printf("Before: meow\n After: %s\n", ft_memset("meow", 43, 3));
	// this works! :
	// char *str;
	// str = strdup("hello");
	// ft_memset(str, '!', 3);
	// printf("%s\n", str);

	//ft_bzero
	// char *str;
	// str = strdup("hello");
	// ft_bzero(str, 3);
	// printf("ft_bzero: %s\n", str);
	// /////
	// char *str2;
	// str2 = strdup("hello");
	// bzero(str2, 1);
	// printf("bzero: %s\n", str2);

	// ft_strncmp
	char s1[] = "ABD";
	char s2[] = "ABF";
	printf("ft_strncmp: (%d)\n", ft_strncmp(s1, s2, 3));
	printf("strncmp: (%d)\n", strncmp(s1, s2, 3));

	//ft_atoi
	// char	*str = " 	-2147483649a";
	// printf("ft_atoi: (%d)\n", ft_atoi(str));
	// printf("atoi: (%d)\n", atoi(str));

	return (0);
}