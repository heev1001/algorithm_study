#include <stdio.h>

int main(void) {
	int n;
	
	scanf_s("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (j < i) {
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