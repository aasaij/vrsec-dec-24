//Program to demonstrate pass by reference
#include <stdio.h>
//function definition
int change(int x){
	x = 100;
}
void modify(int* x){
	*x = 100;
}
int main(){
//	//function declaration or function proto-type
//	int change(int);
	int x;
	x = 10;	
	//function calling passing by value
//	change(x);
	//function calling passing by reference
	modify(&x);
	printf("%d\n", x);
	return 0;
}
