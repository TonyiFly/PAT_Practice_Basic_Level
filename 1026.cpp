#include <cstdio>

int main()
{
	int t1, t2;
	scanf("%d %d", &t1, &t2);
	int t = t2 - t1;
	if (t % 100 >= 50) {
		t = t / 100 + 1;
	}
	else {
		t = t / 100;
	}
	printf("%02d:%02d:%02d\n", t / 3600, t % 3600 / 60, t % 60);
	return 0;
}