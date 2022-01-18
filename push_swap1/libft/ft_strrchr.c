/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:40:34 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/12/03 12:13:21 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	size_t		len;
	size_t		i;

	len = ft_strlen(s);
	i = 0;
	ptr = s;
	while (i <= len)
	{
		if (ptr[len - i] == (char)c)
			return ((char *)(ptr + (len - i)));
		i++;
	}
	return (NULL);
}
