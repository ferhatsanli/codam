/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:47:05 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 16:36:12 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	char	inp[3] = "123";
// 	char	res;

// 	res = (char)ft_str_is_numeric(inp) + 48;
// 	write(1, &res, 1);
// 	return (0);
// }

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
