#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	char *str;
	str = "abc";
	ft_putstr(str);
	write(1, "\n",1);

}
