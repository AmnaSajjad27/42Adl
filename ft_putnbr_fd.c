/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:13:15 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/15 16:54:34 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(n * -1);
	}
	else
	{
		nbr = (unsigned int)n;
		if (nbr >= 10)
		{
			ft_putnbr_fd(nbr / 10, fd);
		}
		ft_putchar_fd((char)(nbr % 10 + 48), fd);
	}
}
