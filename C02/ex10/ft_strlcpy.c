/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:12:33 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 17:44:13 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "ferhat sanli";
// 	char	dst[10];

// 	int		res = ft_strlcpy(dst, src, 10);

// 	printf("Copied target variable content:%s\n", dst);
// 	printf("Result value of the function:%d\n", res);
// 	return (0);
// }

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
