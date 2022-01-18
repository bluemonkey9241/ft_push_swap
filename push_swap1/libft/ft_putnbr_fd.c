/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svan-waa <svan-waa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:29:20 by svan-waa      #+#    #+#                 */
/*   Updated: 2020/12/03 12:04:36 by svan-waa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nb;
	long	newn;

	newn = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		newn *= -1;
	}
	nb = (newn % 10) + 48;
	newn /= 10;
	if (newn != 0)
		ft_putnbr_fd(newn, fd);
	write(fd, &nb, 1);
}
