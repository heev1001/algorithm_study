#include <stdio.h>

int main(void) {
	int testcase, a, b;
	scanf("%d", &testcase);

	for (int i = 0; i < testcase; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i + 1, a + b);
	}

	return 0;
}