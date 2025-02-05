#include <unistd.h>

void ft_print_reverse_alphabet(char c);

int main (void)
{
    char c;
    c = 'z';

    while (c >= 'a')
    {
        ft_print_reverse_alphabet(c);
        c--;
    }
    return (0);
}