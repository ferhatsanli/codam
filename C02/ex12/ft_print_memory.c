/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:23:16 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 17:17:40 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	*ft_print_memory(void *addr, unsigned int size);
// int		is_printable(char c);
// void	*dec_to_hex(char in_dec, char *hex, int i_start);
// void	*long_to_str(unsigned long in_long, char *out_str);
// void	print_line(void *addr);

// #include <stdio.h>
// int	main(void)
// {
// 	char	a[13] = "ferhat sanli";

// 	print_line(a);
// 	return (0);
// }

// void	*ft_print_memory(void *addr, unsigned int size)
// {
// 	// char	g_tx[79] = "Bonjour les amis, c'est fou tout ce qu'on 
// peut faire avec print_memory lol lol";
// }

// int	is_printable(char c)
// {
// 	if (c >= 32 && c <= 126)
// 		return (1);
// 	return (0);
// }

// void	*dec_to_hex(char in_dec, char *hex, int i_start)
// {
// 	int		dec;

// 	hex[0] = '0';
// 	hex[1] = '0';
// 	dec = in_dec;
// 	if (dec / 16 > 9)
// 	{
// 		hex[i_start] = ((dec / 16) % 10) + 'a';
// 	}
// 	else
// 	{
// 		hex[i_start] = (dec / 16) + 48;
// 	}
// 	if (dec % 16 > 9)
// 	{
// 		hex[i_start + 1] = ((dec % 16) % 10) + 'a';
// 	}
// 	else
// 	{
// 		hex[i_start + 1] = (dec % 16) + 48;
// 	}
// }

// // 12353485 >> "12353485"
// void	*long_to_str(unsigned long in_long, char *out_str)
// {
// 	int i;
// 	int len;
// 	char tmp;

// 	i = 0;
// 	while (in_long > 0)
// 	{
// 		out_str[i++] = (in_long % 10) + '0';
// 		in_long /= 10;
// 	}
// 	len = i;
// 	i = 0;
// 	while (i < len / 2)
// 	{
// 		tmp = out_str[len - i - 1];
// 		out_str[len - i - 1] = out_str[i];
// 		out_str[i++] = tmp;
// 	}
// }
// // sizeof(char) * 16
// void	print_line(void *addr)
// {
// first column: address in 16 characlong_to_str(address, long_str);ter length
// 	unsigned long 	address = (unsigned long) addr;
// 	char			hex_addr[16];
// 	char 			long_str[16];
// 	int				i;

// 	long_to_str(address, long_str);
// 	i = get_len(long_str) - 1;
// 	while (long_str[i] != '\0')
// 	{
// 		dec_to_hex(long_str[i], hex_addr, i - 1);
// 		i--;
// 	}
// 	printf("%p >> %ld\n", addr, address);
// 	printf("hex: %s\n", hex_addr);
// }

// int		get_len(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }