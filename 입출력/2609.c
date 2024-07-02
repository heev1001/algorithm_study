#include <stdio.h>

int main(void) {
	int a, b, max = 0, min = 10001;
	scanf_s("%d %d", &a, &b);
	
	for (int i = (a < b) ? a : b; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			max = i;
			break;
		}
	}

	printf("%d\n", max);

	for (int i = a * b; i >= 1; i--) {
		if (i % a == 0 && i % b == 0) {
			min = i;
		}
	}
	
	printf("%d", min);

	return 0;
}