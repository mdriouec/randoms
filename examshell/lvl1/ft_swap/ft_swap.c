#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a,int *b)
{
	int *temp;
	temp = b;
	b = a;
	a = temp;
	printf("a = %d\nb = %d\n",*a,*b);
}
int main()
{
	int a = 5;
	int b = 7;
	int *p1 = &a;
	int *p2 = &b;
	ft_swap(p1,p2);
	return 0;
}
