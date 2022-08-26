/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:47:46 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/23 10:41:08 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	s_len;	
	char	*str;

	a = 0;
	b = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
	len = s_len - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[a])
	{
		if (a >= start && b < len)
			str[b++] = s[a];
	a++;
	}
	str[b] = 0;
	return (str);
}
/*
int main()
{
    char src[] = "substr function Implementation";
 
    int m = 10;
    int n = 12;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
    works
}
*/
