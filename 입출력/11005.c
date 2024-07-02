#include <stdio.h>

void convert(int n, int b) {
	if (n != 0) {
		convert(n / b, b);
		if (n % b > 9 && b > 10)
			printf("%c", 'A' + n % b - 10);
		else
			printf("%d", n % b);
	}
}

int main(void) {
	int n, b;
	scanf_s("%d %d", &n, &b);

	convert(n, b);

	return 0;
}