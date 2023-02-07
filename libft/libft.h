/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:43:31 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/02/06 21:29:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isdigit(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(char const *s);
void	ft_bzero(void *b, size_t n);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);
char	*ft_strdup(char const *src);
void	*ft_memset(void *b, int c, size_t len);
int		ft_isascii(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	*ft_calloc(size_t count, size_t size);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_putendl_fd(char *s, int fd);
size_t	ft_strlcpy(char *dst, char const *src, size_t dstsize);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcat(char *dst, char const *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putnbr_fd(int nb, int fd);
char	*ft_strchr(char const *s, int c);
char	*ft_strrchr(char const *s, int c);
int		ft_atoi(char *str);
char	*ft_strnstr(char const *haystack, char const *needle, size_t len);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
void	free_result(char **str);

#endif
