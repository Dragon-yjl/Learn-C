
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int i, j, k, m;
	int s = 0;
	int S, N;
	int num[100][3] ;

	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) {
				num[s][0] = i;
				num[s][1] = j;
				num[s][2] = k;
				s = s + 1;
			}
		}
	}

	S = s;
	N = S;
	for (m = 0; m < S; m++) {
		if (num[m][0] == num[m][1] || num[m][0] == num[m][2] || num[m][1] == num[m][2]) {
			num[m][0] = 0;
			N = N - 1;
		}
	}

	printf("There are %d numbers and they are\n", N);
	for (m = 0; m < S; m++) {
		if (num[m][0] != 0) {
			printf("%d%d%d\n", num[m][0], num[m][1], num[m][2]);
		}
	}


	system("pause");
	return 0;
}