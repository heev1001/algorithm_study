#include <stdio.h>

int main(void) {
	int a = 1, b = 1;

	while (1) {
		scanf_s("%d %d", &a, &b);

		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}

	return 0;
}