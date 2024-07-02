#include <stdio.h>

long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(void) {
	long long  a, b;
	scanf_s("%lld %lld", &a, &b);

	long long n = gcd(a, b);
	for (int i = 0; i < n; i++) {
		printf("1");
	}

	return 0;
}