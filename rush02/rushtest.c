#include <stdio.h>

int digit_length(int n)
{
	int digits = 0;
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

int ten_power_n(int n)
{
	int ten = 10;

	while (n > 1)
	{
		ten = ten * 10;
		n--;
	}
	return (ten);
}

int main()
{
	
	char *array[30];
	array[0] = "zero";
	array[1] = "one";
	array[2] = "two";
	array[3] = "three";
	array[4] = "four";
	array[5] = "five";
	array[6] = "six";
	array[7] = "seven";
	array[8] = "eight";
	array[9] = "nine";
	array[10] = "ten";
	array[11] = "eleven";
	array[12] = "twelve";
	array[13] = "thirteen";
	array[14] = "fourtheen";
	array[15] = "fifteem";
	array[16] = "sixteen";
	array[17] = "seventeen";
	array[18] = "eighteen";
	array[19] = "nineteen";
	array[20] = "twenty";
	array[21] = "thirty";
	array[22] = "fourty";
	array[23] = "fifty";
	array[24] = "sixy";
	array[25] = "seventy";
	array[26] = "eighty";
	array[27] = "ninety";
	array[28] = "hundred";
	array[29] = "thousand";

	// for (int i = 1; i < 100000; i *= 10)
	// {
	// 	printf("%d   %d\n", i, digit_length(i));
	// }
	//int n = 0;
	int i = 100;
	//while (n < 111){
	if (digit_length(i) == 4)
	{
		printf("%s %s ", array[i / ten_power_n(digit_length(i) - 1)], array[29]);
		i = i % ten_power_n(digit_length(i) - 1);
	}
	if (digit_length(i) == 3)
	{
		printf("%s %s ", array[i / ten_power_n(digit_length(i) - 1)], array[28]);
		i = i % ten_power_n(digit_length(i) - 1);
	}
	if (digit_length(i) <= 2)
	{
		if (i <= 20)
		{
			printf("%s", array[i]);
		}
		else if (i % 10 != 0)
		{
			printf("\n%d\n", i);
			printf("%s %s", array[(i / 10) + 18], array[i % 10]);
		}
		else
		{
			printf("%s", array[(i / 10) + 18]);
		}
	}
	printf("\n");
	// n++;
	// i = n;
	//}
	
	return (0);
}

// 0: zero
// 1: one
// 2: two
// 3: three
// 4: four
// 5: five
// 6: six
// 7: seven
// 8: eight
// 9: nine
// 10: ten
// 11: eleven
// 12: twelve
// 13: thirteen
// 14: fourteen
// 15: fifteen
// 16: sixteen
// 17: seventeen
// 18: eighteen
// 19: nineteen
// 20: twenty
// 30: thirty
// 40: forty
// 50: fifty
// 60: sixty
// 70: seventy
// 80: eighty
// 90: ninety
// 100: hundred
// 1000: thousand