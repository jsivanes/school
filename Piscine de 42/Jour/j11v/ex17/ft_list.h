/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsivanes <jsivanes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 21:52:34 by jsivanes          #+#    #+#             */
/*   Updated: 2016/01/29 14:41:56 by jsivanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list		*ft_list_push_params(int ac, char **av);
t_list		*ft_create_elem(void *data);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strcmp(char *s1, char *s2);
void		ft_putnbr(int nb);
void				ft_list_reverse_fun(t_list *begin_list);
void		ft_list_reverse(t_list **begin_list);

#endif
