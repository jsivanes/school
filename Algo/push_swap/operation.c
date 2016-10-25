/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsivanes <jsivanes42@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:30:32 by jsivanes          #+#    #+#             */
/*   Updated: 2016/08/17 15:10:39 by jsivanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void		init_opp(t_opp *opp)
{
	opp[0].name = "sa\0";
	opp[0].get_op = &sa;
	opp[1].name = "sb\0";
	opp[1].get_op = &sb;
	opp[2].name = "ss\0";
	opp[2].get_op = &ss;
	opp[3].name = "pa\0";
	opp[3].get_op = &pa;
	opp[4].name = "pb\0";
	opp[4].get_op = &pb;
	opp[5].name = "ra\0";
	opp[5].get_op = &ra;
	opp[6].name = "rb\0";
	opp[6].get_op = &rb;
	opp[7].name = "rr\0";
	opp[7].get_op = &rr;
	opp[8].name = "rra\0";
	opp[8].get_op = &rra;
	opp[9].name = "rrb\0";
	opp[9].get_op = &rrb;
	opp[10].name = "rrr\0";
	opp[10].get_op = &rrr;
}

static	void	print_checkervector(char **str)
{
	int		i;
	int		len;

	i = -1;
	len = ft_strtablen(str);
	while (++i < len)
	{
		if (i != 0 && i != 3)
		{
			ft_putstr(str[i]);
			ft_putchar('\n');
		}
		ft_strdel(&str[i]);
	}
}

int				operation(t_nb **a, t_nb *b, t_flag *flag, char *str)
{
	t_opp		opp[11];
	char		*line;
	int			i;

	init_opp(opp);
	while (get_next_line(0, &line))
	{
		i = 0;
		while (i < 11 && ft_strcmp(line, opp[i].name) != 0)
			i++;
		if (i == 11)
			ft_error("\033[31mError");
		opp[i].get_op(a, &b, flag, &str);
		if (flag->v)
			print_checkervector(ft_strsplit(str, '\n'));
		ft_strdel(&line);
		ft_strdel(&str);
	}
	if (b)
		ft_error("\033[31mKO");
	if (flag->r == 1)
		return (check_good_r(*a));
	return (check_good(*a));
}
