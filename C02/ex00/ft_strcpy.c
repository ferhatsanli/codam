/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:28:57 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/18 16:30:43 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

// int	main(int argc, char const *argv[])
// {
// 	char	name[10];
// 	char	name2[10];

// 	ft_strcpy(name, "ferhat");
// 	ft_strcpy(name2, name);
// 	printf("%s\n", name2);
// 	return (0);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
