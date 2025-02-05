#include <unistd.h>

void ft_print_alphabet(char c);

int main (void)
{
    char c;
    c = 'a';
    while (c <= 'z')
    {
        ft_print_alphabet(c);
        c++;
    }
    return (0);
}