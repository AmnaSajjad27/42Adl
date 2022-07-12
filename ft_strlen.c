/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:58:00 by asajjad           #+#    #+#             */
/*   Updated: 2022/07/12 10:07:50 by asajjad          ###   ########.fr       */
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
    char string[] = "Hellooooooooooo";
   int c =  ft_strlen(string);
   printf("%d",c);

}
*/
