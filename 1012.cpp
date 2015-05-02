#include <cstdio>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	double a4 = 0;
	int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0;
	int num = 0;
	int flag2 = 1, sum4=0;
	while (n--) {
		scanf("%d", &num);
		if (num % 10 == 0) {
			a1 += num;
			i1++;
		}

		if (num % 5 == 1) {
			a2 += flag2*num;
			flag2 *= -1;
			i2++;
		}

		if (num % 5 == 2) {
			a3++;
			i3++;
		}

		if (num % 5 == 3) {
			sum4 += num;
			i4++;
		}

		if (num % 5 == 4) {
			if (num > a5) {
				a5 = num;
			}
			i5++;
		}
	}

	if (i1) {
		printf("%d ", a1);
	}
	else printf("N ");
	if (i2) {
		printf("%d ", a2);
	}
	else printf("N ");
	if (i3) {
		printf("%d ", a3);
	}
	else printf("N ");
	if (i4) {
		a4 = (double)sum4 / i4;
		printf("%.1f ", a4);
	}
	else printf("N ");
	if (i5) {
		printf("%d\n", a5);
	}
	else printf("N\n");
	return 0;
}