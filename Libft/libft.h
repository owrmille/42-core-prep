#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_strlen(char	*str);
void	*ft_memset(void	*b, int c, size_t len);
void	ft_bzero(void	*s, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(char	*s1, char	*s2, unsigned int n);
int	ft_atoi(char	*str);
char	*ft_strdup(char *src);


#endif