#include <stdio.h>

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}
	return len;
}
int main()
{
	
	int k;
	char *str;
	str = "abcd";
	k = ft_strlen(str);
	printf("%d\n", k);




}
