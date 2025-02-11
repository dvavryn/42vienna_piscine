/* #include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char string[] = "0123456789";
	int ret = ft_str_is_numeric(string);

	printf("%s\n", string);
	if (ret == 0)
		printf("-- not numeric\n-- Return 0");
	else if (ret == 1)
		printf("++ numeric\n++ Return 1\n");
}
 */
int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if (str_count >= '0' && str_count <= '9')
			counter++;
		else
			return (0);
	}
	return (1);
}
