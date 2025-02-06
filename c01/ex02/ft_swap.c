#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int numa;
    int numb;

    numa = *a;
    numb = *b;


}

int main(void)
{
    //-------
    int a;
    int a_;
    int *aa;

    a = 4;
    a_ = a;
    aa = &a;
    //-------
    int b;
    int b_;
    int *bb;

    b = 10;
    b_ = b;
    bb = &b;
    //-------
    ft_swap(&aa, &bb);
    printf("a: %i -> %i\nb: %i -> %i\n", a_, a, b_, b);
}