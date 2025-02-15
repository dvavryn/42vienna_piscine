/* #include <stdio.h>

int ft_is_prime(int nb);

int main (void)
{
	printf("%i", ft_is_prime(4563));
}
 */
int	ft_is_prime(int nb)
{
	int	counter;

	if (nb < 2)
		return (0);
	counter = 2;
	while (counter < nb)
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}
