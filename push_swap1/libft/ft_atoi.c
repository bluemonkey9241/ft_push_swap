/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:13:53 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/23 12:46:37 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (0);
	if (c == '\n' || c == '\v' || c == '\f')
		return (0);
	return (1);
}

// Takes a number in string format and turns it into an integer
// overflows when number is smaller than smallest or bigger than biggest int
int	ft_atoi(const char *str)
{
	int		i;
	int		isnegative;
	int		rtrn;

	rtrn = 0;
	i = 0;
	while (ft_iswhitspace(str[i]) == 0)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isnegative = 1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		rtrn *= 10;
		rtrn += (str[i] - 48);
		i++;
	}
	if (isnegative == 1)
		return ((-1) * rtrn);
	return (rtrn);
}
