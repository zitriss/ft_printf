/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:15:35 by tlize             #+#    #+#             */
/*   Updated: 2024/11/26 16:13:06 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_printfu(unsigned int n)
{
	if (n >= 10)
		ft_printfu(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
}
