/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:46:54 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/07 12:14:39 by amaryllis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

size_t	my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	has_new_line(t_gnl_list *stash)
{
	int			i;
	t_gnl_list	*curr;

	if (!stash)
		return (0);
	curr = get_last_node(stash);
	i = 0;
	while (curr->content[i])
	{
		if (curr->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

t_gnl_list	*get_last_node(t_gnl_list *stash)
{
	t_gnl_list	*curr;

	curr = stash;
	while (curr && curr->next)
		curr = curr->next;
	return (curr);
}

void	mema_line(t_gnl_list *stash, char **line)
{
	int	i;
	int	len;

	len = 0;
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			if (stash->content[i] == '\n')
			{
				len++;
				break ;
			}
			len++;
			i++;
		}
		stash = stash->next;
	}
	*line = malloc(sizeof(char) * (len + 1));
}

void	free_everything_gnl(t_gnl_list **stash)
{
	t_gnl_list	*current;
	t_gnl_list	*next;

	current = *stash;
	while (current)
	{
		free(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	*stash = NULL;
}
