/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:23:54 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/20 22:29:46 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

// #include <stdio.h>
// int	main(void)
// {
// 	char	text[6] = "feRHAT";

// 	printf("%s\n", ft_strlowcase(text));
// 	return (0);
// }

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
