#include <unistd.h>


int main(int ac,char **av)
{
	int i = 0;
	char c;

	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			c = av[1][i];
			if ((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z'))
			{
				if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				{
					c = c + 13;
				}
				else if ((c >= 'n' && c <= 'z')
						|| (c >= 'N' && c <= 'Z'))
				{
					c = c - 13;
				}
			}
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

	
