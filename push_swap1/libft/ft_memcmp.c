/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 14:15:15 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/21 14:33:14 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *string1, const void *string2, size_t n)
{
	unsigned int		i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = string1;
	s2 = string2;
	i = 0;
	while (i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
