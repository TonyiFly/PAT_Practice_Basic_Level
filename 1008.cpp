#include <cstdio>
#include <cstdlib>

int main()
{
	int n = 0, t = 0;
	scanf("%d %d", &n, &t);
	int* num = (int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	while (t--) {
		int temp = num[n-1];
		for (int i = n - 2; i >= 0; i--) {
			num[i + 1] = num[i];
		}
		num[0] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", num[i]);
		if (i != n - 1) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}