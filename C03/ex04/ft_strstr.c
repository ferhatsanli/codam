/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:14:11 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 22:59:25 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		get_len(char *str);

int		test_it(char *in_str, char *in_to_find, char *expected_res);
#include <stdio.h>
int	main(void)
{
	printf("%d\n", test_it("hello world", "world", "result"));
	printf("%d\n", test_it("hello world", "world", "world"));
	printf("%d\n", test_it("openai", "open", "openai"));
	printf("%d\n", test_it("hello world", "mars", "0"));
	printf("%d\n", test_it("test string", "", "test string"));
	printf("%d\n", test_it("aaaaaa", "aaa", "aaaaaa"));
	return (0);
}

int		test_it(char *in_str, char *in_to_find, char *expected_res)
{
	char *result = ft_strstr(in_str, in_to_find);

	if (result == expected_res)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		needle_len;
	int		match_count;
	char	*first_match_addr;

	i = 0;
	match_count = 0;
	needle_len = get_len(to_find);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[match_count])
			match_count++;
		else if (match_count > 0)
			match_count = 0;
		if (match_count == 1)
			first_match_addr = &str[i];
		i++;
	}
	if (match_count == needle_len)
		return (first_match_addr);
	return (0);
}

int	get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
