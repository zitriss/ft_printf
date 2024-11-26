/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:53:28 by tlize             #+#    #+#             */
/*   Updated: 2024/11/26 18:22:03 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>

int		ft_printf(const char *format, ...);
int     ft_printfc(int s);
int     ft_printfs(char *str);
int 	ft_printfp(void *ptr);
void	ft_printfu(unsigned int n);
int 	ft_printfx(unsigned int n, char format);


#endif