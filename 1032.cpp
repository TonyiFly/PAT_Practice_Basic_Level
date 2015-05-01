#include <cstdio>

int main()
{
	int score[100001] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int schoolID = 0, schoolScore = 0;
		scanf("%d %d", &schoolID, &schoolScore);
		score[schoolID] += schoolScore;
	}
	int maxID = 1, maxScore = score[1];
	for (int  i = 1; i <= n; i++)
	{
		if (score[i]>maxScore) {
			maxScore = score[i];
			maxID = i;
		}
	}
	printf("%d %d\n", maxID, maxScore);
	return 0;
}