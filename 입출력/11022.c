#include <stdio.h>

int main(void) {
	int testcase, a, b;
	scanf_s("%d", &testcase);

	for (int i = 0; i < testcase; i++) {
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i+1, a, b, a + b);
	}

	return 0;
}