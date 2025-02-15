int	ft_is_prime(int nb);

/* #include <stdio.h>
int	ft_find_next_prime(int nb);

int main (void)
{
		printf("%i\n", ft_find_next_prime(i));
}
 */
int	ft_find_next_prime(int nb)
{
	int	counter;

	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	counter = 0;
	while (counter == 0)
	{
		nb++;
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (-1);
}

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
