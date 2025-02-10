/* #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello World";
	unsigned int i = 5;
	int rv;

	rv = ft_strncmp(s1, s2, i);

	if (rv == 0)
		printf
		("%s\n%s\n<s1> is equal to <s2> in the first %i bytes\n", s1, s2, i);
	else if (rv < 0)
		printf("%s\n%s\n<s1> less than <s2>\n", s1, s2);
	else
		printf("%s\n%s\n<s1> greater than <s2>\n",s1 ,s2);
}
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && s1[counter] != '\0' && s2[counter] != '0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	if (counter < n)
		return (s1[counter] - s2[counter]);
	return (0);
}
