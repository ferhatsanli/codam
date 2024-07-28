/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:36:28 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 17:21:10 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

int		get_len(char *str);

// #include <stdio.h>
// int	main(void)
// {
// 	char name[13] = "ferhat";
// 	char surname[7] = " sanli";

// 	printf("%s\n", ft_strcat(name, surname));
// 	return (0);
// }

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = get_len(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
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
