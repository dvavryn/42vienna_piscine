/* #include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char string[] = "abs!QAAQ@";
	int ret = ft_str_is_printable(string);

	if (ret == 0)
		printf("-- not printable\n-- Return 0");
	else if (ret == 1)
	{
		printf("%s\n", string);
		printf("++ printable\n++ Return 1\n");
	}
}
 */
int	ft_str_is_printable(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if (str_count >= 33 && str_count <= 126)
			counter++;
		else
			return (0);
	}
	return (1);
}
