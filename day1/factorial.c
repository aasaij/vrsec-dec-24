#include <stdio.h>
int fact(int n){
	if (n == 0)
		return 1;
	else
		return n * fact(n-1);
}

int main(){
	int x, f = 1;
	scanf("%d", &x);
	printf("%d", fact(x));
	return 0;
}