#include <cstdio>

int main()
{
	int change(char x);
	int n = 0;
	char mp[3] = { 'B', 'C', 'J' };
	int timesA[3] = { 0 }, timesB[3] = { 0 };
	int handsA[3] = { 0 }, handsB[3] = { 0 };
	char c1, c2;
	int n1, n2;
	scanf("%d", &n);
	while (n--) {
		getchar();
		scanf("%c %c", &c1, &c2);
		n1 = change(c1);
		n2 = change(c2);
		if ((n1 + 1) % 3 == n2) {
			timesA[0]++;
			timesB[2]++;
			handsA[n1]++;
		}
		else if (n1 == n2) {
			timesA[1]++;
			timesB[1]++;
		}
		else if ((n2 + 1) % 3 == n1) {
			timesA[2]++;
			timesB[0]++;
			handsB[n2]++;
		}
	}
	printf("%d %d %d\n", timesA[0], timesA[1], timesA[2]);
	printf("%d %d %d\n", timesB[0], timesB[1], timesB[2]);
	int max1 = 0, max2 = 0;
	for (int i = 0; i < 3; i++)
	{
		if (handsA[i]>handsA[max1])
			max1 = i;
		if (handsB[i] > handsB[max2])
			max2 = i;
	}
	printf("%c %c\n", mp[max1], mp[max2]);
	return 0;
}

int change(char x)
{
	switch (x)
	{
	case 'B': return 0; break;
	case 'C': return 1; break;
	case 'J': return 2; break;
	default:
		break;
	}
}