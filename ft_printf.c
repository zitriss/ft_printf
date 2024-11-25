/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:20:43 by tlize             #+#    #+#             */
/*   Updated: 2024/11/25 18:01:02 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"

static void	redirect(char special, va_list args);

int	ft_printf(const char *, ...)
{
	va_list = args;
	int	i = 0;

	va_start(args, format);
	while (format[i])
	{ 
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			redirect(format[i], args);
		}
		else
			ft_putchar_fd(format[i], 1);
		i ++;	
	}
	va_end(args);
	return (i);
}
