#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char caracter = 'A';
    while(caracter <= 'Z')
    {
        ft_putchar(caracter);
        caracter++; 
    }
    ft_putchar('\n');
    return(0);
}