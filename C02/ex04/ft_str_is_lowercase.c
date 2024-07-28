/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_str_is_lowercase.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 22:54:25 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/18 23:02:59 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

// #include <stdio.h>
// int	main(void)
// {
// 	char c;

// 	c = "\0";
// 	printf("%d\n", ft_str_is_lowercase(&c));
// 	return (0);
// }

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
