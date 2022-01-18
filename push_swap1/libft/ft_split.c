/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 11:43:05 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/21 14:46:34 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	substr_amount(char const *s, char c)
{
	size_t	amount;

	if (*s != '\0')
	{
		amount = 1;
		while (*s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			while (*s == c && *s != '\0')
				s++;
			if (*s != '\0')
				amount++;
		}
		return (amount);
	}
	return (0);
}

static char	*new_string(char const *s, char c)
{
	char	*nstring;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	nstring = (char *)malloc(sizeof(char) * (count + 1));
	if (nstring == NULL)
		return (NULL);
	while (i < count)
	{
		nstring[i] = s[i];
		i++;
	}
	nstring[i] = '\0';
	return (nstring);
}

static void	*free_split(char **array)
{
	while (*array)
	{
		free(*array);
		array++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	substr_amt;
	size_t	i;

	i = 0;
	while (*s == c && *s != '\0')
		s++;
	substr_amt = substr_amount(s, c);
	array = malloc((substr_amt + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (i < substr_amt)
	{
		array[i] = new_string(s, c);
		if (array[i] == NULL)
			return (free_split(array));
		while (*s != c && *s != '\0')
			s++;
		while (*s == c && *s != '\0')
			s++;
		i++;
	}
	array[i] = NULL;
	return (array);
}
