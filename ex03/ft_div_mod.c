#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	 *div = a / b;
	 *mod = a % b;
} 
int main()
{
	int a = 12;
	int b = 6;
	int m;
	int k;
	ft_div_mod(a, b, &m, &k);
	printf("%d\n%d\n", m, k);






}
