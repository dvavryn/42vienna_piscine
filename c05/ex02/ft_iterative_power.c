/* #include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main (void)
{
	int i = ft_iterative_power(16, -2);
	printf("%i", i);
}
 */
int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	result = nb;
	counter = power - 2;
	while (counter >= 0)
	{
		result = result * nb;
		counter--;
	}
	return (result);
}
