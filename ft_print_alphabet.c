#include <unistd.h>

void ft_print_alphabet(void)
{
    char alphabet = 'a';
    while (alphabet <= 'z')
    {
        write (1, &alphabet, 1);
        alphabet++;
    }
}

int main (void)
{
    ft_print_alphabet ();
    return (0);
}