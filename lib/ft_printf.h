/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:58:40 by ainga-ri          #+#    #+#             */
/*   Updated: 2022/10/02 12:58:42 by ainga-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_check(va_list argument, char type);
int		ft_putstr(char *str);
int		ft_putpointer(unsigned long ptr);
int		ft_putnbr(unsigned int n);
int		ft_putui(unsigned int u);
int		ft_putlower(unsigned int n);
int		ft_putupper(unsigned int n);
int		ft_protect(unsigned int n, int x, int (*f) (unsigned int));
#endif
