/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:15:38 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/01/29 16:53:20 by amaryllis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*pdest;
	char	*psrc;
	size_t	i;

	pdest = (char *)dest;
	psrc = (char *)src;
	if (pdest == NULL && psrc == NULL)
		return (NULL);
	i = 0;
	if (pdest > psrc)
	{
		while (n--)
			pdest[n] = psrc[n];
	}
	else
	{
		while (n--)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
