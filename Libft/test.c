#include <stdio.h>
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
	printf("Is '1' alpha? %d\n", ft_isalpha('1'));
	return (0);
}