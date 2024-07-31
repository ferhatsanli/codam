/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:54:26 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/30 14:22:42 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	dec_to_hex(char c, char *hex);

int	main(void)
{
	char	*c;

	c = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(c);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	str_hex[2];

	i = 0;
	str_hex[0] = '0';
	str_hex[1] = '0';
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			dec_to_hex(str[i], str_hex);
			write(1, "\\", 1);
			write(1, &str_hex[0], 1);
			write(1, &str_hex[1], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	dec_to_hex(char c, char *hex)
{
	int		dec;

	hex[0] = '0';
	hex[1] = '0';
	dec = c;
	if (dec / 16 > 9)
	{
		hex[0] = ((dec / 16) % 10) + 97;
	}
	else
	{
		hex[0] = (dec / 16) + 48;
	}
	if (dec % 16 > 9)
	{
		hex[1] = ((dec % 16) % 10) + 97;
	}
	else
	{
		hex[1] = (dec % 16) + 48;
	}
}
