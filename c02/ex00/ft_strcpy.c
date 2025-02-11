/* #include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main (void)
{
	char source[] = "Hello World!";
	int size = sizeof(source) / sizeof(source[0]);
	char destination[size];

	ft_strcpy(destination, source);
	printf("%s", destination);
}
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
