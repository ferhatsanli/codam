/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsanli <fsanli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:30:08 by fsanli            #+#    #+#             */
/*   Updated: 2024/07/25 22:38:52 by fsanli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_alpha_numeric(char c);
int		is_alpha(char c);

// #include <stdio.h>
// int main(void)
// {
// 	char text[62] = "HELLO";
// 	// "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", ft_strcapitalize(text));
// 	return (0);
// }

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((is_alpha(str[i])) && (!is_alpha_numeric(str[i - 1])))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

int	is_alpha_numeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
