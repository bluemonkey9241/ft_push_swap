/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:39:26 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/12/03 12:13:08 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				j;
	int				k;
	const char		*ptr;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len)
	{
		j = 0;
		if (*haystack == needle[j] && *haystack != '\0')
		{
			ptr = haystack;
			k = 0;
			while (haystack[k] == needle[j] && haystack[k] != '\0' && (len - k))
			{
				k++;
				j++;
			}
		}
		if (needle[j] == '\0')
			return ((char *)ptr);
		haystack++;
		len--;
	}
	return (NULL);
}
