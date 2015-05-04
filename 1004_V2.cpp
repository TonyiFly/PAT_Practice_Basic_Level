#include <cstdio>
#include <cstdlib>
#include <cstring>

int main()
{
	int n = 0;
	scanf("%d", &n);
	struct stu {
		char name[11];
		char num[11];
		int score;
	} s,max_s,min_s;
	max_s.score = 0;
	min_s.score = 101;
	for (int i = 0; i < n; i++) {
		scanf("%s", &s.name);
		scanf("%s", &s.num);
		scanf("%d", &s.score);

		if (s.score > max_s.score) {
			strcpy(max_s.name, s.name);
			strcpy(max_s.num, s.num);
			max_s.score = s.score;
		}
		if (s.score < min_s.score) {
			strcpy(min_s.name, s.name);
			strcpy(min_s.num, s.num);
			min_s.score = s.score;
		}
	}
	printf("%s %s\n", max_s.name, max_s.num);
	printf("%s %s\n", min_s.name, min_s.num);
	return 0;
}