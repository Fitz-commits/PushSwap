#ifndef MINILIB_H
#define MINILIB_H

#include <unistd.h>
#include <stdlib.h>


int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
int					ft_strlen(const char *str);
void				ft_putendl_fd(char *s, int fd);
void				ft_putchar_fd(char c, int fd);



#endif
