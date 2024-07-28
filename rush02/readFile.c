/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readFile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:16:35 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/28 23:39:49 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**read_file(char *filepath);
ssize_t	fill_buffer(char *filepath, char *buffer);
int		check_file(char *path);
void	split_chunks(char *src, char **dest, int *start_line);
int		get_length(char *str);

char	**alloc_arr(void);
int		line_count(char *path);

int		g_fd_buffer_size = 128;
int		g_file_line_count = 0;
int		g_fd;

char	**read_file(char *filepath)
{
	int		i;
	int		line_no;
	int		start_of_chunk;
	char	*buffer;
	char	**result;

	g_fd = open(filepath, O_RDONLY);
	buffer = malloc(g_fd_buffer_size);
	g_file_line_count = line_count(filepath);
	result = alloc_arr();
	line_no = 0;
	if (check_file(filepath) != 0)
		return (NULL);
	while (fill_buffer(filepath, buffer) > 0)
	{
		split_chunks(buffer, result, &line_no);
		free(buffer);
	}
	close(g_fd);
	return (result);
}

ssize_t	fill_buffer(char *filepath, char *buffer)
{
	int	res;

	res = read(g_fd, buffer, g_fd_buffer_size - 1);
	printf("%s\n", buffer);
	return (res);
}

int	check_file(char *path)
{
	int		fd;
	char	*buffer;
	int		byte_read;

	buffer = malloc(8);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	byte_read = read(fd, buffer, 8);
	if (byte_read == -1)
	{
		close(fd);
		return (2);
	}
	close(fd);
	return (0);
}

void	split_chunks(char *src, char **dest, int *start_line)
{
	int	end;
	int	i_src;
	int	i_dst;

	end = 0;
	i_src = 0;
	i_dst = 0;
	while (src[i_src])
	{
		if (*start_line < g_file_line_count)
		{
			if (src[end] == '\n' || src[end] == '\0')
			{
				i_dst = get_length(dest[*start_line]);
				while (i_src < end)
				{
					if (src[i_src] != ' ')
					{
						dest[*start_line][i_dst] = src[i_src];
						i_dst++;
					}
					i_src++;
				}
				dest[*start_line][i_dst] = '\0';
				i_src = end + 1;
				if (src[end] == '\0')
				{
					i_src--;
					start_line[0]--;
				}
				start_line[0]++;
			}
			end++;
		}
		else
		{
			dest[*start_line - 1][i_src + 1] = '\0';
			dest[*start_line][0] = '\0';
			src[i_src] = '\0';
		}
	}
	i_src = 0;
	while (i_src < g_fd_buffer_size)
	{
		src[i_src] = '\0';
		i_src++;
	}
}

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**alloc_arr(void)
{
	int		i;
	int		j;
	char	**arr;

	arr = malloc((g_file_line_count + 1) * 8);
	i = 0;
	while (i <= g_file_line_count)
	{
		arr[i] = malloc(g_fd_buffer_size);
		j = 0;
		while (j < g_fd_buffer_size)
		{
			arr[i][j++] = '\0';
		}
		i++;
	}
	return (arr);
}

int	line_count(char *path)
{
	int		line_no;
	int		fd;
	int		i;
	ssize_t	bytes_read;
	char	*buffer;

	buffer = malloc(g_fd_buffer_size);
	line_no = 0;
	bytes_read = 1;
	if (check_file(path))
		return (0);
	fd = open(path, O_RDONLY);
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, g_fd_buffer_size - 1);
		i = 0;
		while (buffer[i] && bytes_read > 0)
		{
			if (buffer[i] == '\n')
				line_no++;
			if (!buffer[i])
			{
				close(fd);
				return (line_no);
			}
			i++;
		}
	}
	close(fd);
	return (line_no);
}
