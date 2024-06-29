#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int count = 0 , sum = 0;
	scanf_s("%d", &count);
	char num1[101], num2;

	scanf("%s", num1);
	for (int i = 0; i < count; i++) {
		num2 = num1[i] - '0';
		sum += num2;
	}

	printf("%d", sum);
	return 0;
}