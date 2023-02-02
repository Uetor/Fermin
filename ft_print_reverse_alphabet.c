#include <unistd.h>

void ft_print_reverse_alphabet (void)
{
    char reverse = 'z';
    while (reverse >= 'a')
    {
        write (1, &reverse, 1);
        reverse--;
    }
 
}

int main (void)
{
    ft_print_reverse_alphabet ();
    return (0);
}