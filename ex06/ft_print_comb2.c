#include <unistd.h>

/*
	*Escribe una función que muestre todas las combinaciones posibles de dos números
	*(XX XX) entre 0 y 99, en orden creciente.

	*00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99
*/

void ft_print_comb2(void)
{
    int a = 0, b = 1;
    char arr[7];
    int posicion = 0;

    while (a < 100) {
        while (b < 100) {
            arr[posicion++] = (a / 10) + '0';
            arr[posicion++] = (a % 10) + '0';
            arr[posicion++] = ' ';
            arr[posicion++] = (b / 10) + '0';
            arr[posicion++] = (b % 10) + '0';
            arr[posicion++] = ',';
            arr[posicion++] = ' ';

            write(1, arr, posicion);
            posicion = 0;
            b++;
        }
        a++;
        b = a + 1;
    }
}

int main()
{
	ft_print_comb2();
	return (0);
}