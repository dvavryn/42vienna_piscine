#include <stdio.h>
int ft_iterative_factorial(int nb);

int main (void)
{
    int result = ft_iterative_factorial(16);
    printf("%i", result);
}
int ft_iterative_factorial(int nb)
{
    int counter;
    int result = 1;

    counter = nb;
    while (counter != 0)
    {
        result *= counter;
        counter--;
    }
    return (result);
}

/*please handle "if the argument is not valid the function should return 0"*/