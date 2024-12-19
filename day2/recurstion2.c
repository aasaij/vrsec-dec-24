//Program to print natural numbers using recursion
#include <stdio.h>
void print(int x){
	if (x){
		print(x-1);
		printf("%d ", x);		
	}
}

int main(){
	int n;
	scanf("%d", &n);
	print(n);	
	return 0;
}