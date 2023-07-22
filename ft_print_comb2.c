#include <unistd.h>
#include <string.h>

void ft_print_comb2()
{
	int i, j;
    char buffer[6]; // to store the digits and newline characters

    for (i = 0; i <= 99; i++) {
        for (j = 0; j <= 99; j++) {
            buffer[0] = '0' + i / 10; // convert the tens digit of the first number to character
            buffer[1] = '0' + i % 10; // convert the ones digit of the first number to character
            buffer[2] = ' '; // add a space
            buffer[3] = '0' + j / 10; // convert the tens digit of the second number to character
            buffer[4] = '0' + j % 10; // convert the ones digit of the second number to character
            buffer[5] = ' '; // add a space

            write(1, buffer, 6); // write the buffer to standard output
        }
    }

}