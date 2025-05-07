/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:32:45 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/07 12:15:02 by amaryllis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_putstr_len(const char *s)
{
	int	i;

	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	i = 0;
	i += write(1, s, ft_strlen(s));
	if (i < 0)
		return (0);
	return (i);
}

int	ft_putchar_len(const char c)
{
	int	i;

	i = 0;
	i = write(1, &c, 1);
	if (i < 0)
		return (0);
	return (i);
}
