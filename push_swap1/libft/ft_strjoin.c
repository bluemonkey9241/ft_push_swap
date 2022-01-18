/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:35:52 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/11/25 12:18:46 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	char	*newstring;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	newstring = malloc(s1len + s2len + 1);
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (i < (s1len + s2len))
	{
		if (i < s1len)
			newstring[i] = s1[i];
		else
			newstring[i] = s2[i - s1len];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
