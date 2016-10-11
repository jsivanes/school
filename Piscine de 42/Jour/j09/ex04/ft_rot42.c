/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsivanes <jsivanes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:55:12 by jsivanes          #+#    #+#             */
/*   Updated: 2015/10/23 14:57:49 by jsivanes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	if (str - 97 < 10)
		str += 10;
	else
		str -= 10;
	return (str);
}
