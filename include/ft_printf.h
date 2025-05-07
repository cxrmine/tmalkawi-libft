/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaryllis <amaryllismain09@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:02:47 by amaryllis         #+#    #+#             */
/*   Updated: 2025/05/07 12:02:47 by amaryllis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H

/**
 * @brief displays string in stdout + returns len of what was displayed
 * 
 * @param s 
 * @return int 
 */
int			ft_putstr_len(const char *s);

/**
 * @brief same thing but with a character
 * 
 * @param c 
 * @return int 
 */
int			ft_putchar_len(const char c);

/**
 * @brief gets the hex value of a pointer
 * 
 * @param p 
 * @return int 
 */
int			ft_pointer_in_hex(unsigned long long p);

/**
 * @brief displays an unsigned int into stdout + returns the len of it
 * 
 * @param n 
 * @return int 
 */
int			ft_putunbr_len(unsigned int n);

/**
 * @brief converts unsigned int into hex
 * 
 * @param n 
 * @return int 
 */
int			ft_itohx(unsigned int n);

/**
 * @brief same thing but in uppercase
 * 
 * @param n 
 * @return int 
 */
int			ft_hex_uppercase(unsigned int n);

/**
 * @brief prints percent
 * 
 * @param percent 
 * @return int 
 * 
 * @note we boutta write meaningless functions in this one
 */
int			ft_print_percent(const unsigned char percent);

/**
 * @brief prints number into stdout and returns the len of them
 * 
 * @param nb 
 * @return int 
 */
int			ft_putnbr_len(int nb);

#endif