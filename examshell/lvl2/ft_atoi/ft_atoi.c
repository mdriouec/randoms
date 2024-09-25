#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10 + str[i] - '0';
		i++;
	}
	result * sign;
	return result;
}
int main()
{
	char *str = " ---+--+1234ab567";
	printf("%d\n",ft_atoi(str));
	return 0;
}
