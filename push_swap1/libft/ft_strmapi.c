/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:38:28 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/11/25 11:55:50 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	slen;
	char	*string;

	slen = ft_strlen(s);
	string = malloc(sizeof(char) * slen + 1);
	i = 0;
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
