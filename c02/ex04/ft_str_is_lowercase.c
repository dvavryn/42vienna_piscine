/* #include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char string[] = "123";
	int ret = ft_str_is_lowercase(string);

	printf("%s\n", string);
	if (ret == 0)
		printf("-- not lowercase\n-- Return 0");
	else if (ret == 1)
		printf("++ lowercase\n++ Return 1\n");
}
 */
int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if (str_count >= 'a' && str_count <= 'z')
			counter++;
		else
			return (0);
	}
	return (1);
}
