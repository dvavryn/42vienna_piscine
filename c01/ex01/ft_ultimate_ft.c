/*
#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int num = 5;

	int *nbr1 = &num;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);

	printf("%i", num);
	return 0;
}
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
