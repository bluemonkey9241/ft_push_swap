/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:43:11 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/12/09 11:49:25 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	i;
	char	*newstring;

	while (ft_charcmp(*s1, set))
		s1++;
	s1len = ft_strlen(s1);
	if (s1len != 0)
		while (ft_charcmp(s1[s1len - 1], set))
			s1len--;
	i = 0;
	newstring = malloc(s1len + 1);
	if (newstring == NULL)
		return (NULL);
	while (i < s1len)
	{
		newstring[i] = s1[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
