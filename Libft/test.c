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
int	main()
{
	// ft_isalpha
	// printf("Is '1' alpha? %d\n", ft_isalpha('1'));
	
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
	
	//ft_atoi
	char	*str = " 	-2147483649a";
	printf("ft_atoi: (%d)\n", ft_atoi(str));
	printf("atoi: (%d)\n", atoi(str));

	return (0);
}