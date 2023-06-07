#include <unistd.h>

void ft_print_tre(char a, char b, char c)
{
	char space = ' ';

	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &space, 1);
}

void ft_print_comb(void)
{
    char a = '0';

    while (a <= '9')
    {
		char b = a + 1;
		while (b <= '9' && b > a)
		{
			char c = b + 1;
			while(c <= '9' && c > b)
			{
				ft_print_tre(a, b, c);
				c++;
			}
			b++;
		}
        a++;
    }
    
}

int main()
{
	ft_print_comb();
	return (0);
}