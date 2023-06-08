#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	char buffer[32];

    int length = sprintf(buffer, "%d", nb);
    write(1, buffer, length);
}

int main()
{
	ft_putnbr(-56);
	return (0);
}