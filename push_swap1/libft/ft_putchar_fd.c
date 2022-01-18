/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:27:43 by svan-waa      #+#    #+#                 */
/*   Updated: 2021/09/21 14:45:49 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	a;

	a = (unsigned char)c;
	write(fd, &a, 1);
}
