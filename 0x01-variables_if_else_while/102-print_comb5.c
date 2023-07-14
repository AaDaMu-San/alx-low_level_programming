#include <stdio.h>

int main() {
	for (int i = 0; i <= 99; i++) {
		for (int j = 0; j <= 99; j++) {
			if (i != j) {
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + j % 10);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return 0;
}
