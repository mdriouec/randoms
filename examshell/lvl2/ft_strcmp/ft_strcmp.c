#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1,char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1 == s2)
	{
		i++;
	}
	return (s1 - s2);
}

int main()
{
	char *s1 = "marouane";
	char *s2 = "one";
	printf("%d\n",ft_strcmp(s1,s2));
	return 0;
}
