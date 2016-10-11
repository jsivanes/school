/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsivanes <jsivanes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:26:04 by jsivanes          #+#    #+#             */
/*   Updated: 2016/01/14 12:46:59 by jsivanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char *))
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
