/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 08:56:38 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/05 14:48:59 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
    c='5';
    printf("Result when numeric character is passed: %d", ft_isdigit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

    return 0;
}
*/
