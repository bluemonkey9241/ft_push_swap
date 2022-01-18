/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_charcmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:14:18 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/21 14:31:09 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charcmp(const char c1, const char *set)
{
	size_t		i;
	size_t		setlen;

	setlen = ft_strlen(set);
	i = 0;
	while (i < setlen)
	{
		if (c1 == set[i])
			return (1);
		i++;
	}
	return (0);
}
