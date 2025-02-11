#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char s[] = "Hello World";
	int i = ft_strlen(s);
	
	printf("\"%s\" has %i characters", s, i);
}

int ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}