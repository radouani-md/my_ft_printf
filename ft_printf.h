/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <mradouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:57:15 by mradouan          #+#    #+#             */
/*   Updated: 2024/11/30 22:00:26 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_uns_putnbr(unsigned int n);
int	ft_puthex(unsigned long num, char *base);
int	ft_putpoint(void *ptr);
int	ft_hexanbr(unsigned long ptr, char a);
int	mix_printer(char caracter, va_list args);

#endif
