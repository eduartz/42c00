#include <unistd.h>

void ft_putcha(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putcha('b');
    return (0);
}
