/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:46:57 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/22 17:46:08 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*

int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
{
	int(*fp)(int, int);

	fp = add;
	printf("%d\n", fp(10, 20)); //30

	fp = mul;
	printf("%d\n", fp(10, 20)); //200
}
WORKS I THINK
*/
