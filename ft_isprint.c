/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:54:17 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/15 17:38:21 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d"
	, c, ft_isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d"
	, c, ft_isprint(c));

    return 0;
}
*/
