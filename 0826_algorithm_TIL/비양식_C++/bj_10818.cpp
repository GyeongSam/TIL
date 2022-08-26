
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n,a,M=-1000000,m=1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a > M) {
			M = a;
		}
		if (a < m) {
			m = a;
		}

	}
	printf("%d %d", m, M);
}

		