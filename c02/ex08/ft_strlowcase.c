/* #include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char string[] = "Hello World! 42";
	
	ft_strlowcase(string);
	
	printf("%s", string);
}
 */
char	*ft_strlowcase(char *str)
{
	char	count_str;
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		count_str = str[counter];
		if (count_str >= 'A' && count_str <= 'Z')
			str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);
}
