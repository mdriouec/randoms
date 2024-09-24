#include <unistd.h>

int main(int ac,char **av)
{
	(void)av;
	(void)ac;
	write(1, "z\n",2);
	return 0;
}
