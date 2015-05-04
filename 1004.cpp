#include <cstdio>
#include <cstdlib>

int main()
{
	int n = 0;
	scanf("%d", &n);
	struct stu {
		char name[11];
		char num[11];
		int score;
	};
	stu* s = (stu*)malloc(n*sizeof(stu));
	for (int i = 0; i < n; i++) {
		scanf("%s", &s[i].name);
		scanf("%s", &s[i].num);
		scanf("%d", &s[i].score);
	}
	int max = s[0].score, min = s[0].score;
	int maxId = 0, minId = 0;
	for (int i = 1; i < n; i++) {
		if (s[i].score > max) {
			max = s[i].score;
			maxId = i;
		}
		if (s[i].score < min) {
			min = s[i].score;
			minId = i;
		}
	}
	printf("%s %s\n", s[maxId].name, s[maxId].num);
	printf("%s %s\n", s[minId].name, s[minId].num);
	return 0;
}