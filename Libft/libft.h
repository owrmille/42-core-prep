#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_strlen(const char	*str);
void	*ft_memset(void	*b, int c, size_t len);
void	ft_bzero(void	*s, size_t n);
void	*ft_memcpy(void	*restrict dst, const void	*restrict src, size_t n);
void	*ft_memmove(void	*dst, const void	*src, size_t len);
size_t	ft_strlcpy(char	*restrict dst, const char	*restrict src, size_t dstsize);
size_t	ft_strlcat(char	*restrict dst, const char	*restrict src, size_t dstsize);
char	*ft_strchr(const char	*s, int c);
char	*ft_strrchr(const char	*s, int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(char	*s1, char	*s2, unsigned int n);
void	*ft_memchr(const void	*s, int c, size_t n);
int	ft_memcmp(const void	*s1, const void	*s2, size_t n);
char	*ft_strnstr(const char	*str, const char	*substr, size_t len);
int	ft_atoi(char	*str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(char *src);


#endif