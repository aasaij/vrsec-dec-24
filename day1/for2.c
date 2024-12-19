#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int j = 2;j<=n; j*=j)
		printf("%d ", j);
	return 0;
}

