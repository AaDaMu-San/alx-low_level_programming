#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            // Print first number's tens digit
            putchar('0' + (i / 10));

            // Print first number's ones digit
            putchar('0' + (i % 10));

            // Print space separator
            putchar(' ');

            // Print second number's tens digit
            putchar('0' + (j / 10));

            // Print second number's ones digit
            putchar('0' + (j % 10));

            // Print comma and space separator
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
