#include <stdio.h>

int ft_recursive_factorial(int nb);

int main (void)
{
    int result = ft_recursive_factorial(7);
    printf("%i", result);
}

int ft_recursive_factorial(int nb)
{
    int result;

    result = 0;

    if (nb == 0)
        result = 1;
    else if (nb > 0)
        result = nb * ft_recursive_factorial(nb - 1);
    return (result);
}


/* please fix if argument is not valid the function should return 0*/