/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:28:39 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/22 14:44:54 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

long int	to_abs(long int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

size_t	numlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*number;
	unsigned int	i;

	i = numlen(n);
	number = malloc(sizeof(char) * (i + 1));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		number[0] = '-';
		n = n * (-1);
	}
	if (n == 0)
		number[0] = '0';
	number[i] = '\0';
	while (n != 0)
	{
		i--;
		if (number[i] == '-')
			break ;
		number[i] = to_abs(n % 10) + '0';
		n = to_abs(n / 10);
	}
	return (number);
}
