/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:24:51 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/05 19:28:52 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
	{
		return (0);
	}
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
/*
int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}
*/
