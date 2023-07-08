/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmazitov <tmazitov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:41:11 by tmazitov          #+#    #+#             */
/*   Updated: 2023/07/08 19:43:34 by tmazitov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isalpha(int ch);
int		ft_isprint(int ch);

void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strdup(char *src);
int		ft_strncmp(const char *string1, const char *string2, size_t num);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *memptr1, const void *memptr2, size_t num);

int		ft_atoi(const char *string);
void	*ft_calloc(size_t length, size_t type_size);
#endif