/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:10:57 by lesanche          #+#    #+#             */
/*   Updated: 2022/08/24 12:45:35 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdio.h>
# include   <stdlib.h>
# include   <string.h>
# include	<unistd.h>
# include	<stdarg.h>

unsigned int	chiquicode(va_list tipos, char x);
int				dieciseipati(unsigned long long n);
int				sip(va_list tipos);
int				ft_printf(const char *leyenda, ...);
size_t			ft_strlen(const char *s);
unsigned int	ft_putchar_fd(char c, int fd);
int				numerodenumero(int cordero);
void			imprimip(unsigned long long n, int fd);
void			muy16(unsigned long n, int fd);
void			imprimi16(unsigned long n, int fd);
unsigned int	sinraya(unsigned int n, int fd);
unsigned int	cuentacosa(unsigned int num);
int				ft_putstr_fd(char *s, int fd);
int				sis(va_list	tipos);
int				sii(va_list	tipos);
int				sic(va_list	tipos);
int				six(va_list	tipos);
int				sixx(va_list	tipos);
int				siu(va_list	tipos);
int				putnmbr(int n);
int				uputnmbr(unsigned long n);
int				ft_putnbr_fd(int n, int fd);

#endif