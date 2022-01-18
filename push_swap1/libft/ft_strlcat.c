/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:36:36 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/21 14:47:31 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstlen;
	size_t		srclen;
	size_t		i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	while (*dst != '\0')
		dst++;
	if (!((dstlen + 1) >= dstsize))
	{
		while (i < (dstsize - dstlen - 1) && *src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
			i++;
		}
	}
	*dst = '\0';
	if (dstsize < dstlen)
		return (dstsize + srclen);
	else
		return (dstlen + srclen);
}
