#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*str = "Hallo, das ist ein Teststring";
	char	*find[] = {
		"Test",								// normal case
		"Hallo",							// at the beginning
		"ring",								// at the end
		"nicht",							// not there
		"",									// empty
		"hellothatisanstringthatislonger"	// longer than haystack
	};

	for (int i = 0; i < 6; i++)
	{
		char *result_ft = ft_strstr(str, find[i]);
		char *result_lib = strstr(str, find[i]);

		printf("Search for \"%s\":\n", find[i]);
		printf("  ft_strstr: %s\n", result_ft ? result_ft : "NULL");
		printf("  strstr   : %s\n", result_lib ? result_lib : "NULL");
		printf("\n");
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_s;
	int	counter_f;

	counter_s = 0;
	counter_f = 0;
	while (str[counter_s] != '\0')
	{
		if (str[counter_s] == to_find[counter_f])
		{
			while (to_find[counter_f] != '\0')
				counter_f++;
				printf("%i", counter_f);
		}
		counter_s++;
		printf("%i", counter_s);
	}
	return (&str[counter_s - counter_f]);
}