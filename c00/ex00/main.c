#include <unistd.h>

void ft_putchar(char c);

int main (void)
{
    int i;
    
    i = '0';
    while (i < '9')
    {
        ft_putchar(i);
        i++;
    }
    ft_putchar('\n');
    return (0);
}