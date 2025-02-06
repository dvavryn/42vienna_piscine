#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int i;

	i= 0;
	ft_ultimate_ft(&i);
	printf("%i", i);
	return (0);	
}

void	ft_ultimate_ft(int *********nbr)
{
	int num; 
	int *ptr = &num;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	*********nbr = &ptr8;
}
