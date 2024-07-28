/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:20:14 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 17:20:54 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[5] = "ABC";
// 	char	str2[5] = "AB";
// 	int		res = ft_strcmp(str1, str2);

// 	printf("%s + %s >> %d\n", str1, str2, res);
// 	return (0);
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}
