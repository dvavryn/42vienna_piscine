/* #include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main (void)
{
	char s1[] = "Hello World";
	char s2[] = "Hello World";
	//char s2[] = "Hello World!";

	int i;

	i = ft_strcmp(s1, s2);

	if (i == 0)
		printf("%s\n%s\n<s1> == <s2>\n", s1, s2);
	else if (i < 0)
		printf("%s\n%s\n<s1> less than <s2>\n", s1, s2);
	else
		printf("%s\n%s\n<s1> greater than <s2>\n",s1 ,s2);
}
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter + 1] - s2[counter + 1]);
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
