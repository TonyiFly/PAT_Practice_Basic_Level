#include <cstdio>

int main()
{
	int n = 0, nCase = 1;
	scanf("%d", &n);
	long int a = 0, b = 0, c = 0;
	while (n--) {
		scanf("%ld %ld %ld", &a, &b, &c);
		if (a + b > c) {
			printf("Case #%d: true\n", nCase++);
		}
		else {
			printf("Case #%d: false\n", nCase++);
		}
	}
	return 0;
}