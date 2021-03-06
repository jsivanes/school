/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsivanes <jsivanes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 21:26:25 by jsivanes          #+#    #+#             */
/*   Updated: 2016/01/27 12:05:14 by jsivanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*tmp;
	int			i;

	list = ft_create_elem(av[1]);
	i = 1;
	while (++i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = list;
		list = tmp;
	}
	return (list);
}
