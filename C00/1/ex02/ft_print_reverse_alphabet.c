/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:20:18 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/16 14:10:42 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);
void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(int argc, char const *argv[])
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
