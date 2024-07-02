#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(void) {
	int t, n;
	long long sum = 0;
	int arr[101];
	scanf_s("%d", &t);

	for (int i = 0; i < t; i++) {
		sum = 0;
		scanf_s("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &arr[j]);
		}

		for (int j = 0; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				sum += gcd(arr[j], arr[k]);
			}
		}
		printf("%lld\n", sum);
	}

	return 0;
}