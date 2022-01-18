/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:18:14 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/12/03 12:02:20 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned int			i;
	const unsigned char		*s;
	unsigned char			k;

	s = (const unsigned char *)src;
	i = 0;
	k = (unsigned char)c;
	while (i < n && s[i] != k)
		i++;
	if (i == n)
		return (NULL);
	else
		return ((void *)(src + i));
}
