/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <asajjad@student.42.fr>           +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:18:14 by asajjad           #+#    #+#             */
/*   Updated: 2022/07/06 17:18:14 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_isalnum(int c)
{
    if (c > 64 && c < 91)
    {
        return (1);
    }
    else if (c > 96 && c < 123)
    {
        return (1);
    }
    else if (c > 47 && c < 58)
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
    int c = 'W';
    int d = ft_isalnum(c);
    printf("%d",d);
}
*/