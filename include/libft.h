/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:45:20 by amaryllis         #+#    #+#             */
/*   Updated: 2025/03/06 10:53:19 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>
# include <sys/types.h>
# include <limits.h>

/**
 * @brief Mimics the stdio function: printf with less features :p
 * 
 * @param s 
 * @param ... 
 * @return int 
 */
int			ft_printf(const char *s, ...);

/**
 * @brief Get the next line from file desc
 * 
 * @param fd 
 * @return char* 
 */
char		*get_next_line(int fd);

/**
 * @brief linked list used for the list functions in libft
 * 
 * @property void* content
 * @property struct s_list* next
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief add ll node to front
 * 
 * @param lst 
 * @param new 
 * 
 * @returns void
 */
void		ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief add ll node to back
 * 
 * @param lst 
 * @param new 
 * 
 * @returns void
 */
void		ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief deletes a node with a callback function
 * 
 * @param lst 
 * @param del 
 * 
 * @returns void
 * @warning impractical function: do not use
 */
void		ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief clears the whole ll
 * 
 * @param lst 
 * @param del 
 * 
 * @returns void
 * @warning remind why the hell do we need a callback function for this task
 */
void		ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * @brief mods all elements of the list depending on the callback function
 * 
 * @param lst 
 * @param f 
 * 
 * @returns void
 * @note alters the ll
 */
void		ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief gets the size of the list
 * 
 * @param lst 
 * @return int 
 */
int			ft_lstsize(t_list *lst);

/**
 * @brief creates a new node
 * 
 * @param content 
 * @return t_list* 
 */
t_list		*ft_lstnew(void *content);

/**
 * @brief gets the last node from the ll
 * 
 * @param lst 
 * @return t_list* 
 */
t_list		*ft_lstlast(t_list *lst);

/**
 * @brief mods all elements of the list but this time with 2 callback functions
 * 
 * @param lst 
 * @param f 
 * @param del 
 * @return t_list* 
 * 
 * @warning blame 42 pedagos to add a mod and del function in a function that has map in its name, MAKE IT MAKE SENSE
 */
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief init mem with 0's
 * 
 * @param s 
 * @param n 
 */
void		ft_bzero(void *s, size_t n);

/**
 * @brief copy mem src into mem dst until size n
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void		*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief move mem src from dest reference until size n
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void		*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief init mem with nmemb elements for size "size"
 * 
 * @param nmemb 
 * @param size 
 * @return void* 
 */
void		*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief compare mem of s1 and s2 until size n
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief init mem s with int c until size n
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void		*ft_memset(void *s, int c, size_t n);

/**
 * @brief find the first occ of c in mem s until size n
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void		*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief free memory from tab
 * 
 * @param tab 
 */
void		ft_free_tab(void **tab);

/**
 * @brief uppercase a character
 * 
 * @param c 
 * @return int 
 */
int			ft_toupper(int c);

/**
 * @brief lowercase a character
 * 
 * @param c 
 * @return int 
 */
int			ft_tolower(int c);

/**
 * @brief cmp string s1 and s2 until size n
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief compares string s1 and s2 without size restrictions
 * 
 * @param s1 
 * @param s2 
 * @return int 
 */
int			ft_strcmp(const char *s1, const char *s2);

/**
 * @brief find the first occ of c in s
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char		*ft_strchr(const char *s, int c);

/**
 * @brief find the first occurence of c in s but starting from the end
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char		*ft_strrchr(const char *s, int c);

/**
 * @brief dup a string in memory
 * 
 * @param s 
 * @return char* 
 */
char		*ft_strdup(const char *s);

/**
 * @brief dup an array of strings in memory
 * 
 * @param s 
 * @return char** 
 */
char		**ft_strsdup(const char **s);

/**
 * @brief get s from range of start until len
 * 
 * @param s 
 * @param start 
 * @param len 
 * @return char* 
 */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief joins s1 and s2 which results into the returned string
 * 
 * @param s1 
 * @param s2 
 * @return char* 
 */
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief trims the string from what was in the set
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */
char		*ft_strtrim(char const *s1, char const *set);

/**
 * @brief converts integer to ascii characters
 * 
 * @param n 
 * @return char* 
 */
char		*ft_itoa(int n);

/**
 * @brief Iterates thru s and mod s depending on the callback function f
 * 
 * @param s 
 * @param f 
 * @return char* 
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief split string s from char c
 * 
 * @param s 
 * @param c 
 * @return char** 
 * 
 * @note split my beloved <3
 */
char		**ft_split(char const *s, char c);

/**
 * @brief match pattern from the bigger string until len
 * 
 * @param big 
 * @param little 
 * @param len 
 * @return char* 
 */
char		*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief self-explanatory
 * 
 * @param s 
 * @return size_t 
 */
size_t		ft_strlen(const char *s);

/**
 * @brief special len function that calcs the len of an array of strings
 * 
 * @param s 
 * @return size_t 
 */
size_t		ft_strslen(const char **s);

/**
 * @brief copies string src into dst until dsize
 * 
 * @param dst 
 * @param src 
 * @param dsize 
 * @return size_t 
 */
size_t		ft_strlcpy(char *dst, const char *src, size_t dsize);

/**
 * @brief append string src to dst until dsize
 * 
 * @param dst 
 * @param src 
 * @param dsize 
 * @return size_t 
 */
size_t		ft_strlcat(char *dst, const char *src, size_t dsize);

/**
 * @brief interates a string to iterate it again depending on callback function, how much you will iterate depends from the first param of the callback function
 * 
 * @param s 
 * @param f 
 * 
 * @note at this point, this is just troll material
 */
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief display char depending on fd
 * 
 * @param c 
 * @param fd 
 */
void		ft_putchar_fd(char c, int fd);

/**
 * @brief displays string depending on fd
 * 
 * @param s 
 * @param fd 
 */
void		ft_putstr_fd(char *s, int fd);

/**
 * @brief displays string and a new line "\n" depending on fd
 * 
 * @param s 
 * @param fd 
 * 
 * @note 2 different function for 1% difference, I told you they are trying to troll us
 */
void		ft_putendl_fd(char *s, int fd);

/**
 * @brief prints nums depending on fd
 * 
 * @param n 
 * @param fd 
 */
void		ft_putnbr_fd(int n, int fd);

/**
 * @brief prints the array in stdout
 * 
 * @param array 
 */
void		ft_print_array(void **array);

/**
 * @brief self-explanatory
 * 
 * @param c 
 * @return int 
 */
int			ft_isalpha(int c);

/**
 * @brief converts ascii to integer
 * 
 * @param nptr 
 * @return int 
 */
int			ft_atoi(const char *nptr);

/**
 * @brief self-explanatory
 * 
 * @param c 
 * @return int 
 */
int			ft_isdigit(int c);

/**
 * @brief self-explanatory
 * 
 * @param c 
 * @return int 
 */
int			ft_isalnum(int c);

/**
 * @brief self-explanatory
 * 
 * @param c 
 * @return int 
 */
int			ft_isascii(int c);

/**
 * @brief checks if a character is printable
 * 
 * @param c 
 * @return int 
 * 
 * @note no it doesn't check if c is a printer you moron
 */
int			ft_isprint(int c);

/**
 * @brief self-explanatory
 * 
 * @param c 
 * @return int 
 */
int			ft_iswhitespace(char c);

#endif
