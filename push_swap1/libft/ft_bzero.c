/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:06:16 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/23 12:48:19 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *s, size_t len)
{
	char	*ptr;

	ptr = s;
	while (len)
	{
		*ptr = '\0';
		ptr++;
		len--;
	}
	return (s);
}
