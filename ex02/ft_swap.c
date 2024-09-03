#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;

}
int main()
{
	int v;
	v = 2;
	int r;
	r = 4;
	ft_swap(&v, &r);
	printf("%d\n", v);
	printf("%d\n", r);





}
