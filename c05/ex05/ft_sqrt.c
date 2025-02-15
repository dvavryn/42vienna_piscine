/* #include <stdio.h>

int ft_sqrt(int nb);

int	main() {
	int	result;

	result = ft_sqrt(15);
	printf("%i", result);
	return (0);
} */
int	ft_sqrt(int nb)
{
	double	d;
	double	epsilon;

	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	d = (double) nb;
	epsilon = 0.00001;
	while ((d * d - nb) > epsilon || (nb - d * d) > epsilon)
	{
		d = 0.5 * (d + nb / d);
	}
	if ((int) d * (int) d != nb)
		return (0);
	return ((int) d);
}
