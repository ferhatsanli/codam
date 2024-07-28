/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 00:10:55 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/20 22:21:10 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

// #include <stdio.h>
// int	main(void)
// {
// 	char	text[6] = "ferhat";

// 	printf("%s >> %s\n", text, ft_strupcase(text));
// 	return (0);
// }

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
