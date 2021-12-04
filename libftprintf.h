/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:05:32 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/30 11:18:22 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include	<stdarg.h>
# include	<unistd.h>
	// functions

int		ft_printf(const char *s, ...);

int		pf_putstr(char *strtoprint);
int		pf_intlen(long nbr);
int		pf_putchar(int n);
int		pf_puthex(unsigned long long n, int maj);
int		pf_putdec(long n);

#endif /* LIBFTPRINTF_H */
