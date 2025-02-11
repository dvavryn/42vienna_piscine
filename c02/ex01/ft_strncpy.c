/* #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main (void)
{
	unsigned int i = 7;
	char source[] = "0123456789";
	char destination[i];

	ft_strncpy(destination, source, i);
	printf("%s", destination);
}
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
