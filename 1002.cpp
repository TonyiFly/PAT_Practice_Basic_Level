#include <cstdio>

int main()
{
	char n[101];
	gets(n);
	int sum = 0;
	for (int i = 0; n[i] != '\0'; i++) {
		sum += (int)n[i] - 48;
	}
	int num[3] = { 0 };
	for (int i = 2; i >= 0; --i) {
		num[i] = sum % 10;
		sum /= 10;
	}
	int begin = 0;
	while (num[begin] == 0) {
		++begin;
	}
	while (begin <= 2) {
		switch (num[begin]) {
		case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
		default: break;
		}
		if (begin != 2) {
			printf(" ");
		}
		++begin;
	}
	printf("\n");
	return 0;
}