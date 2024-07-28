#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	//printf("%s", str);
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}



int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	diff = 0;
	while (s1[i] && i < n)
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	if (s2[i] && i < n)
	{
		diff = 0 - s2[i];
	}
	return (diff);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int digit_length(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	return i;
}

char	*ft_lookup(char **dict, char *str)
{
	int i;

	i = 0;
	ft_strcat(str, ":");
	while (dict[i] != NULL)
	{
		if (ft_strncmp(dict[i], str, digit_length(str) + 1) == 0)
		{
			return (&dict[i][digit_length(str) + 1]);
		}
		i++;
	}
	return (NULL);
}

void	ft_hundred(char **dict, char *str)
{
	char temp[5];

	temp[0] = str[0];
	temp[1] = '\0';
		ft_putstr(ft_lookup(dict, temp));
		write(1, " ", 1);
		temp[0] = '1';
		temp[1] = '0';
		temp[2] = '0';
		temp[3] = '\0';
		ft_putstr(ft_lookup(dict, temp));
		if (!(str[1] == '0' && str[2] == '0'))
			write(1, " ", 1);
}

void	ft_print_hundreds(char **dict, char *str)
{
	char temp[4];
	
	temp[1] = '\0';
	if (str[0] != '0')
	{
		ft_hundred(dict, str);
		//printf("test\n");
	}
	if (str[1] != '0')
	{
		if (str[1] == '1')
		{
			ft_putstr(ft_lookup(dict, &str[1]));
			return ;
		}
		temp[0] = str[1];
		ft_strcat(temp, "0");
		ft_putstr(ft_lookup(dict, temp));
		if (str[2] != '0')
			write(1, " ", 1);
	}
	if (str[2] != '0')
			ft_putstr(ft_lookup(dict, &str[2]));
}

void ft_print_illions(char **dict, int n)
{
	char str[42];
	int i;

	i = 0;
	n = n / 3 * 3;
	if (n == 0)
		return ;
	str[0] = '1';
	while (n >= i)
	{
		str[i + 1] = '0';
		i++;
	}
	str[i] = ':';
	str[i + 1] = '\0';
	write(1, " ", 1);
	ft_putstr(ft_lookup(dict, str));
}

int main()
{
	char *array[36];

	char str[] = "1 234 567 656 500";
	char temp[4];
	temp[0] = '0';
	temp[1] = '\0';
	temp[3] = '\0';
	int length = digit_length(str);
	int i = 0;
	int j = 0;
	array[0] = "0:zero";
	array[1] = "1:one";
	array[2] = "2:two";
	array[3] = "3:three";
	array[4] = "4:four";
	array[5] = "5:five";
	array[6] = "6:six";
	array[7] = "7:seven";
	array[8] = "8:eight";
	array[9] = "9:nine";
	array[10] = "10:ten";
	array[11] = "11:eleven";
	array[12] = "12:twelve";
	array[13] = "13:thirteen";
	array[14] = "14:fourtheen";
	array[15] = "15:fifteem";
	array[16] = "16:sixteen";
	array[17] = "17:seventeen";
	array[18] = "18:eighteen";
	array[19] = "19:nineteen";
	array[20] = "20:twenty";
	array[21] = "30:thirty";
	array[22] = "40:fourty";
	array[23] = "50:fifty";
	array[24] = "60:sixty";
	array[25] = "70:seventy";
	array[26] = "80:eighty";
	array[27] = "90:ninety";
	array[28] = "100:hundred";
	array[29] = "1000:thousand";
	array[30] = "1000000:million";
	array[31] = "1000000000:billion";
	array[32] = "1000000000000:trillion";
	array[33] = "1000000000000000:quadrillion";
	array[34] = "1000000000000000000:quintillion";
	array[35] = NULL;
	if (digit_length(str) == 1 && str[0] == '0')
		ft_putstr(ft_lookup(array, temp));
	while (length >= 0)
	{
		if (length % 3 != 0)
		{
			while (j < 3 - length % 3)
				temp[j++] = '0';
			while (j < 3)
				temp[j++] = str[i++];
			ft_print_hundreds(array, temp);
			ft_print_illions(array, length);
			length -= length % 3;
			length -= 3;
		}
		else
		{
			j = 0;
			while (j < 3)
				temp[j++] = str[i++];
			if (i != 3 && !(str[i - 1] == '0' && str[i - 2] == '0' && str[i - 3] == '0'))
				write(1, " ", 1);
			ft_print_hundreds(array, temp);
			if (!(str[i - 1] == '0' && str[i - 2] == '0' && str[i - 3] == '0'))
				ft_print_illions(array, length);
			length -= 3;
		}
	}

	// if (digit_length(argv[2] < 4))
	// {
	// 	ft_strncpy(temp, argv[2], digit_length);
	// }
	//ft_print_hundreds(array, str);
	return (0);
}
