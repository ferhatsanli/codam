/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 23:03:56 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/19 00:10:41 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

// #include <stdio.h>
// int	main(void)
// {
// 	char	*text = "!alk\043s2\034143";

// 	printf("%s >> %d\n", text, ft_str_is_printable(text));
// 	return (0);
// }

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '!' || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
