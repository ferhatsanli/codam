/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:39:18 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/30 21:41:58 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
// int test_it(char *dest, char *src, unsigned int len, unsigned int expected);

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	char	dest[20] = "Hello, ";
// 	char	*src = "world!";
// 	int		len = 20;

// 	printf("%d\n", test_it("Hello, ", "world!", 20, 13));
// 	printf("%d\n", test_it("Hello, ", "world!", 5, 12));
// 	printf("%d\n", test_it("foo", "bar", 7, 6));
// 	printf("%d\n", test_it("abc", "def", 6, 5));
// 	printf("%d\n", test_it("abc", "def", 4, 7));
// 	printf("%d\n", test_it("test", "string", 15, 11));
// 	printf("%d\n", test_it("test", "string", 10, 12));
// 	printf("%d\n", test_it("short", "longertext", 20, 14));
// 	printf("%d\n", test_it("buffer", "overflow", 8, 12));
// 	printf("%d\n", test_it("longstring", "test", 15, 14));
// 	return (0);
// }

// int test_it(char *dest, char *src, unsigned int len, unsigned int expected)
// {
// 	printf("test_it");
// 	if (ft_strlcat(dest, src, len) == expected)
// 		return (1);
// 	else
// 		return (0);
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
