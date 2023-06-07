#include <unistd.h>

void ft_print_comb(void)
{
	char numb = '1';

	while (numb <= '10')
	{
		write(1, &numb, 1);
		numb++;
	}
}

int main()
{
	ft_print_comb();
	return (0);
}