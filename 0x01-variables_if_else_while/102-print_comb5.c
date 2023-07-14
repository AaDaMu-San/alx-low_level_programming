#include <stdio.h>

int main() {
    int i, j;
    int count = 0;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            count++;
            putchar('0' + (i / 10));
            putchar('0' + (i % 10));
            putchar(' ');
            putchar('0' + (j / 10));
            putchar('0' + (j % 10));

            if (count < 4950) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

