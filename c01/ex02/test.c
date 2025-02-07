#include <stdio.h>

//void ft_swap(int *a, int *b);

int main (void)
{
    int a = 4;
    int a_ = a;
    int b = 10;
    int b_ = b;
    int buf = 0;

    int *atobuf;
    int *btoa;
    int *buftob;
    // int *tob;

    atobuf = &a;
    btoa = &b;
    buftob = &buf;
    buf = *atobuf;
    a = *btoa;
    b = *buftob;

    printf("a: %i -> %i\nb: %i -> %i\n", a_, a, b_, b);
}

//void ft_swap(int *a, int *b)
//{

//}