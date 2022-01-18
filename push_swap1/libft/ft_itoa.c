/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:16:25 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/21 14:32:38 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	intlen(int c)
{
	int	i;

	i = 0;
	if (c == 0)
		i++;
	if (c < 0)
	{
		i++;
		c *= -1;
	}
	{
		while (c != 0)
		{
			c /= 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		nlen;
	char	*nstring;
	long	n;

	nlen = intlen(nb);
	n = nb;
	nstring = malloc(nlen + 1);
	if (nstring == NULL)
		return (NULL);
	nstring[nlen] = '\0';
	if (n == 0)
		nstring[0] = '0';
	if (n < 0)
	{
		nstring[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		nlen--;
		nstring[nlen] = n % 10 + 48;
		n /= 10;
	}
	return (nstring);
}
