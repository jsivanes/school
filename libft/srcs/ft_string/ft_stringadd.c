/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsivanes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:42:27 by jsivanes          #+#    #+#             */
/*   Updated: 2016/11/10 12:43:23 by jsivanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stringaddc(t_string *string, char c)
{
	if (!ft_stringext(string, 1))
		return ;
	string->content[string->size] = c;
	string->size++;
}

void	ft_stringadd(t_string *string, char *str, int n)
{
	if (!ft_stringext(string, n))
		return ;
	ft_memmove(string->content + string->size, str, n);
	string->size += n;
}

void	ft_stringaddnl(t_string *string, char *str, int n)
{
	if (!ft_stringext(string, n + 1))
		return ;
	ft_memmove(string->content + string->size, str, n);
	string->size += n;
	string->content[string->size++] = '\n';
}