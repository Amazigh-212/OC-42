#include <unistd.h>

void ft_putnbr(int number) {
    char buffer[20];
    int length = 0;
    
    if (number == 0) {
        buffer[length++] = '0';
    }
    else {
        if (number < 0) {
            write(1, "-", 1);
            number = -number;
        }
        
        while (number > 0) {
            int digit = number % 10;
            buffer[length++] = '0' + digit;
            number /= 10;
        }
        
        for (int i = length - 1; i >= 0; i--) {
            write(1, &buffer[i], 1);
        }
    }
}