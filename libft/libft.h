/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:05:38 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/10/25 00:17:14 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include    <stdlib.h>
# include    <unistd.h>

int	ft_atoi(char *str);

void	*ft_bzero(void	*s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

char *ft_itoa(int n);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memset(void *b, int c, size_t len);

void ft_putchar_fd(char c, int fd);

void ft_putendl_fd(char *s, int fd);

void ft_putnbr_fd(int n, int fd);

void ft_putstr_fd(char *s, int fd);

char	**ft_split(char const *s, char c);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s);

void ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strjoin(char const *s1, char const *s2);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

size_t	ft_strlen(const char *s);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strrchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	ft_tolower(int c);

int	toupper(int c);

#endif
