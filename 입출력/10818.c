#include <stdio.h>

int main(void) {
	int count, max = -1000001, min = 1000001;
	int num;

	scanf_s("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf_s("%d", &num);
		if (max < num) {
			max = num;
		}
		
		if (min > num) {
			min = num;
		}
	}

	printf("%d %d", min, max);

	return 0;
}