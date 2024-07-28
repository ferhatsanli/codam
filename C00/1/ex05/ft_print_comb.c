/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:36:42 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/16 14:39:08 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }

void	ft_print_comb(void)
{
	char	d1;
	char	d3;
	char	d2;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				write(1, &d1, 1);
				write(1, &d2, 1);
				write(1, &d3, 1);
				if (!(d1 == '7' && d2 == '8' && d3 == '9'))
					write(1, ", ", 1);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
