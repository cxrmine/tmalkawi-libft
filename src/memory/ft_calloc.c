/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:11:38 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/03/08 16:14:24 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*allocated;

	allocated = malloc(size * nmemb);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, nmemb * size);
	return (allocated);
}
