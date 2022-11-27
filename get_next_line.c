/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajjad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:08:24 by asajjad           #+#    #+#             */
/*   Updated: 2022/11/26 19:08:24 by asajjad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// free buffer and join using str_join
char    *ft_free(char   *buffer, char   *buf)
{
    char    tempo;

    tempo = ft_str_join(buffer, buf);
    free(buffer);
    return (tempo);
}

// delete line find 
char    *ft_next(char   *buffer)
{
    int i;
    int j;
    char    *line;

    i = 0;
    // now we find the length of the first line
    while (buffer[i] && buf[i] != '\n')
    i++;
    // if end of line is \0 then we return null
    if (!buffer[i])
    {
        free(buffer);
        return (NULL);
    }
    // allocate memory = length of file - lenght of first line + 1
    line = ft_calloc((ft_str_len(buffer) - i + 1), sizeof(char));
    i++;
    j = 0;
    // assigning line == buffer 
    while (buffer[i])
        line[j++] = buffer[i++];
    return (line);
    }

    // function to return the line 
    char    *ft_line(char   *buffer)
    {
        char    *line;
        int     i;
        
        i = 0;
        // we return null if bufffer is 0 i.e. no line to read
        if (!buffer)
            return (NULL);
        // now we go to the end of line
        while (buffer[i] && buffer[i] != '\n')
            i++;
        // now we malloc to the end of the line 
        line = ft_calloc(i + 2, sizeof(char))
        i = 0;
        //line == buffer 
        while (buffer[i] && buffer[i] != '\n')
        {
            line[i] = buffer[i];
            i++;
        }
        // replace end of line with /n
        if (buffer[i] && buffer[i] == '\n')
            line[i++] = '\n';
        return (line);
        }

        // function to read file 
        char    *read_file(int  fd, char    *res)
        {
            char    *buffer;
            int     byte_rd;

            // malloc if res doesnt exist 
            if (!res)
                res = ft_calloc(1,1);
            // malloc buffer
            buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
            byte_rd = 1;
            while (byte_rd > 0)
            {
                // while not end of line 
                byte_rd = read(fd, buffer, BUFFER_SIZE);
                if (byte_rd == -1)
                {
                    free(buffer);
                    return (NULL);
                }
                // zero to end so it dont leak
                buffer[byte_rd] = 0;
                // now we join and free the memory 
                res = ft_free(res,buffer);
                // we quit if we find \n
                if (ft_strchr(buffer, '\n'))
                break ;
            }
            free(buffer);
            free(res);
        }

// these two shouldnt be here


char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	// error handling
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer);
	return (line);
}
