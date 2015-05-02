#include <cstdio>

int main()
{
	long long num1, num2, n1, n2;
	long long pa = 0, pb = 0;
	scanf("%lld %lld %lld %lld", &num1, &n1, &num2, &n2);
	while (num1 != 0) {
		if (num1 % 10 == n1) {
			pa = 10 * pa + n1;
		}
		num1 /= 10;
	}

	while (num2 != 0) {
		if (num2 % 10 == n2) {
			pb = 10 * pb + n2;
		}
		num2 /= 10;
	}
	printf("%lld\n", pa + pb);
	return 0;
}