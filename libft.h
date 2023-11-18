/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalloux <lgalloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:59:46 by lgalloux          #+#    #+#             */
/*   Updated: 2023/11/16 17:36:36 by lgalloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(int test);
int					ft_isdigit(int test);
int					ft_isalnum(int test);
int					ft_isascii(int test);
int					ft_isprint(int test);

size_t				ft_strlen(const char *str);
void				*ft_memset(void *ptr, int x, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *destination, const void *source,
						size_t size);
void				*ft_memmove(void *destination, const void *source,
						size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_toupper(int character);
int					ft_tolower(int c);
char				*ft_strchr(const char *string, int searchedChar);
char				*ft_strrchr(const char *string, int searchedChar);
int					ft_strncmp(const char *first, const char *second,
						size_t length);
void				*ft_memchr(const void *memoryBlock, int searchedChar,
						size_t size);
int					ft_memcmp(const void *pointer1, const void *pointer2,
						size_t size);
char				*ft_strnstr(const char *str, const char *to_find,
						size_t size);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t elementCount, size_t elementSize);
char				*ft_strdup(const char *src);
char				*ft_substr(char const *str, unsigned int start,
						size_t sublen);
char				*ft_strjoin(const char *str1, const char *str2);
char				*ft_strtrim(char const *str, char const *set);
char				**ft_split(char const *str, char c);
char				*ft_itoa(int nbr);
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int nb, int fd);

// BONUS
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif