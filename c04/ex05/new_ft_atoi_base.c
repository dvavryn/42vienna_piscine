#include <stdio.h>

int ft_atoi_base(char *str, char *base);
int ft_check_radix(char *base);

int main (void)
{
    int i;


    i = ft_atoi_base("2A", "0123456789ABCDEF");
    printf("%i", i);
}

int ft_atoi_base(char *str, char *base)
{

}

int ft_check_radix(char *base)
{
    int counter;
    
    counter = 0;
    while (*base)
    {
        counter++;
        base++;
    }
    return counter;
}

int ft_atoi(char *str)
{
    int output;
    int counter;
    int pos_or_neg;

    output = 0;
    counter = 0;
    pos_or_neg = 1;
    while(str[counter] == ' ')
        counter++;
    while (str[counter] == '+' || str[counter] == '-')
    {
        if (str[counter] == '-')
            pos_or_neg *= -1;
        counter++;
    }
    while (str[counter] >= '0' && str[counter] <= '9')
    {
        output = output * 10 + (str[counter] - '0');
        counter++;
    } 
}

int ft_check_rules(int radix, char *base)
{
    int counter_1;
    int counter_2;

    counter_1 = 0;
    counter_2 = 0;
    if (radix == 0 || radix == 1)
        return (0);
    while (base[counter_1] != '\0')
    {
        counter_2 = 0;
        if (base[counter_1] == '-' || base [counter_1] == '+')
            return (0);
        while (base(counter_2) != '\0')
        {
            if (base[counter_1] == base[counter_2]
                && counter_1 != counter_2)
                return (0);
            counter_2++;
        }
        counter_1++;
    }
    return (1);
}
