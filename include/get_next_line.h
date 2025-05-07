/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:00:46 by amaryllis         #+#    #+#             */
/*   Updated: 2025/05/07 12:00:46 by amaryllis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/**
 * @brief the linked list used for the get_next_line function
 * 
 * @property char* content;
 * @property struct s_gnl_list next;
 */
typedef struct s_gnl_list
{
	char				*content;
	struct s_gnl_list	*next;
}	t_gnl_list;

/**
 * @brief self explanatory
 * 
 * @param s 
 * @return size_t 
 */
size_t		my_strlen(const char *s);

/**
 * @brief store in ll what was read, say that each node contains BUFFER_SIZE amount from the file
 * 
 * @param fd 
 * @param stash 
 */
void		stash_currently_read(int fd, t_gnl_list **stash);

/**
 * @brief place what was read into the ll
 * 
 * @param stash 
 * @param buf 
 * @param bytes_returned 
 */
void		emplace_in_list(t_gnl_list **stash, char *buf, int bytes_returned);

/**
 * @brief extract the line until there is line feed "\n"
 * 
 * @param stash 
 * @param line 
 */
void		extract_line_by_lf(t_gnl_list *stash, char **line);

/**
 * @brief allocate memory for the line
 * 
 * @param stash 
 * @param line 
 * 
 * @note couldn't think of a better name idea, sorry !
 */
void		mema_line(t_gnl_list *stash, char **line);

/**
 * @brief self-explanatory
 * 
 * @param stash 
 */
void		free_stash(t_gnl_list **stash);

/**
 * @brief frees the ll, stash and the allocated line
 * 
 * @param stash 
 */
void		free_everything_gnl(t_gnl_list **stash);

/**
 * @brief checks if the buf extract contains a new line
 * 
 * @param content 
 * @return int 
 */
int			has_new_line(t_gnl_list	*content);

/**
 * @brief Get the last node from ll (e.g. libft)
 * 
 * @param stash 
 * @return t_gnl_list* 
 */
t_gnl_list	*get_last_node(t_gnl_list *stash);

#endif