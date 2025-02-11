/* #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main (void)
{
	char dest[40] = "Hello, ";
	char src[] = "World! Here I am!";
	unsigned int nb = 4;

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
}
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				counter_d;
	unsigned int	counter_s;

	counter_d = 0;
	counter_s = 0;
	while (dest[counter_d] != '\0')
		counter_d++;
	while (src[counter_s] != '\0' && counter_s < nb)
	{
		dest[counter_d + counter_s] = src[counter_s];
		counter_s++;
	}
	dest[counter_d + nb] = '\0';
	return (dest);
}
