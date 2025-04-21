#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h> // needed for using size_t

int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);


#endif /* LIBFT_H */