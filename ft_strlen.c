/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:58:00 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/05 15:08:59 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s++ != 0)
	{
		length++;
	}
	return (length);
}
/*
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",ft_strlen(a));
    printf("Length of string b = %zu \n",ft_strlen(b));

    return 0;
}
*/
