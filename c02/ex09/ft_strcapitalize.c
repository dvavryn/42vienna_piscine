#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	string[] = "a";

	ft_strcapitalize(string);
	//printf("%s", string);
}

char	*ft_strcapitalize(char *str)
{
	int counter;
	int count_str;

	counter = 0;

	while (str[counter] != '\0')
	{
		if (str[counter] == 0 || str[counter - 1] == 32 )
		{
			printf("xxxx");
		}
		//else
		//	printf("no");
		counter++;
	}
	return 0;
}
