#include <unistd.h>

void ft_(void);
void ft_dom(void);

int main(void)
{
    ft_();
    ft_dom();
}

void ft_(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        if (c % 2 == 1)
        {
            write(1, &c, 1);
        }
        else
        {
            c = c - 32;
            write(1, &c, 1);
            c = c + 32;
        }
        c++;
    }
    write(1, "\n", 1);
}

void ft_dom(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c = c - 31;
        write(1, &c, 1);
        c = c + 31;
        c = c + 2;
    }
}