/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mradouan <mradouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:37:18 by mradouan          #+#    #+#             */
/*   Updated: 2024/11/30 21:59:00 by mradouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(void *ptr)
{
	unsigned long	address;
	int				count;

	address = (unsigned long)ptr;
	count = ft_putstr("0x");
	return (count + ft_puthex(address, "0123456789abcdef"));
}
