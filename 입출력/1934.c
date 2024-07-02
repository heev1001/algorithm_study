#include <stdio.h>

int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main(void) {
	int count, a, b, min = 45001;
	scanf_s("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf_s("%d %d", &a, &b);
		
		printf("%d\n", lcm(a, b));
	}
	return 0;
}