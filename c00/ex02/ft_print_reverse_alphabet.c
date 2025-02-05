#include <unistd.h>

void ft_print_reverse_alphabet(int c)
{
    write(1, &c, 1);
}