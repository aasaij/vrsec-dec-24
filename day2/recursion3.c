#include <stdio.h>
void print(int x){
	if (x){
		print(x-1);
		printf("%d ", x);		
		print(x-1);
	}
}

int main(){
	int n;
	scanf("%d", &n); // 3
	print(n);	
	return 0;
}