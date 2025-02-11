/* #include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char string[] = "aaa";
	int ret = ft_str_is_uppercase(string);

	printf("%s\n", string);
	if (ret == 0)
		printf("-- not uppercase\n-- Return 0");
	else if (ret == 1)
		printf("++ uppercase\n++ Return 1\n");
}
 */
int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if (str_count >= 'A' && str_count <= 'Z')
			counter++;
		else
			return (0);
	}
	return (1);
}
