#include <unistd.h>

void ft_print_numbers (void)
{
    int numbers = 0;
    char aux;

    while (numbers <= 9)
    {
        aux = numbers + '1';
        write (1, &aux, 1);
        numbers++;
    }
}

int main (void)
{
    ft_print_numbers ();
    return (0);
}