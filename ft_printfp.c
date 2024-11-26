/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:27 by tlize             #+#    #+#             */
/*   Updated: 2024/11/26 18:31:50 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_printfp(void *ptr)
{
	unsigned long	lgptr;
	int				len;

	len = 0;
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	lgptr = (unsigned long)ptr;
	len += ft_printfs("0x");
	len += ft_printfx(lgptr, 'x');
	return (len);
}
