#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n, m; scanf("%d%d", &n, &m);
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n",k);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(i != 0 && j != 0) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}