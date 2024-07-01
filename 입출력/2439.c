#include <stdio.h>

int main(void) {
	int num;
	scanf_s("%d", &num);

	for (int i = num; i > 0; i--) {
		for (int j = 0; j < num; j++) {
			if (j >= i - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}