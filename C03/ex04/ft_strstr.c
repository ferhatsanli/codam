/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 23:14:11 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/30 15:57:07 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);
int		get_len(char *str);

int		ft_strcmp(char *s1, char *s2);
int		test_it(char *in_str, char *in_to_find, char *expected_res);

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%d\n", test_it("hello, world", "world", "world"));
// 	printf("%d\n", test_it("hello, world", "hello", "hello, world"));
// 	printf("%d\n", test_it("hello, world", "planet", NULL));
// 	printf("%d\n", test_it("test string", "test", "test string"));
// 	printf("%d\n", test_it("abcdef", "def", "def"));
// 	printf("%d\n", test_it("abcdef", "xyz", NULL));
// 	printf("%d\n", test_it("aaaaa", "aa", "aaaaa"));
// 	return (0);
// }

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		else
// 			i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

// int test_it(char *in_str, char *in_to_find, char *expected_res)
// {
//     char *result = ft_strstr(in_str, in_to_find);

//     // Eğer hem result hem de expected_res NULL ise, test başarılı
//     if (result == NULL && expected_res == NULL)
//         return 1;

// Eğer ikisi de NULL değilse ve içerik karşılaştırması doğruysa, test başarılı
// if (result != NULL && expected_res != NULL)
// 	if (strcmp(result, expected_res) == 0)
//     	return 1;

//     // Diğer durumlarda test başarısız
//     return 0;
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	needle_len;

	needle_len = get_len(to_find);
	if (needle_len == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (needle_len == j)
		{
			return (&str[i]);
		}
		i++;
	}
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
