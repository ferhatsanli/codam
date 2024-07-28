/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:20:24 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/16 14:28:59 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdlib.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	result;

	result = '0';
	if (n > 0 || !n)
	{
		result = 'P';
	}
	else if (n < 0)
	{
		result = 'N';
	}
	write(1, &result, 1);
}

// int	main(int argc, char const *argv[])
// {
// 	if (argc > 1)
// 		if (atoi(argv[1]))
// 			ft_is_negative(atoi(argv[1]));
// 	return (0);
// }
