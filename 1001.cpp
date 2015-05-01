#include <cstdio>

int main()
{
	int num = 0, step = 0;
	scanf("%d", &num);
	while (num != 1) {
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num *= 3;
			num += 1;
			num /= 2;
		}
		++step;
	}
	printf("%d\n", step);
	return 0;
}