/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:11:48 by asajjad           #+#    #+#             */
/*   Updated: 2022/08/21 14:14:37 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
	{
		return (0);
	}
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int main()
{
    char src[] = "geeksforgeeks";
 
    // Here destination is large enough
    // to store the src with Null
    // character at the end
    char dest[14];
 
    // copying src into dest.
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
     
    return 0;
}
*/
