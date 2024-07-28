/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 21:06:01 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 17:39:29 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

// int	main(void)
// {
// 	int	res;

// 	res = ft_str_is_alpha("asd-f");
// 	return (0);
// }

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i++];
		if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		{
			return (0);
		}
	}
	return (1);
}
