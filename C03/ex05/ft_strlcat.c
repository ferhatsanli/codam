/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:39:18 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 22:58:01 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				get_len(char *str);

// #include <stdio.h>
// int main() {
//     char dst[20] = "Hello, ";
//     const char *src = "world!";
//     size_t dstsize = 20;

//     size_t result = ft_strlcat(dst, src, dstsize);

//     printf("Resulting string: %s\n", dst); // "Hello, world!"
//     printf("Total length: %zu\n", result); // 13 (7 + 6)

//     return 0;
// }

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = get_len(dest);
	src_size = get_len(src);
	if (dest_size >= size)
		return (dest_size + src_size);
	while (src[i] != '\0' && dest_size + i < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
