#include<stdio.h>
int main() {
	int N, M, can = 0;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < M; i++) {
		int n, b, a;
		scanf("%d", &n);
		b = 3000000;
		for (int j = 0; j < n; j++) {
			scanf("%d", &a);
			if (a > b) {
				can = 1;
			}
			b = a;
		}
	}
	if (can == 1) { printf("No"); }
	else { printf("Yes"); }

}