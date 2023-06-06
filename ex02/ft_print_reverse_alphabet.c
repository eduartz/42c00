#include <unistd.h>

void ft_print_reverse_alphabe(void)
{
    char cba = 'z';

    while (cba >= 'a')
    {
        write(1, &cba, 1);
        cba--;
    }
    
}

int main()
{
    ft_print_reverse_alphabe();
    return (0);
}