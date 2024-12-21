#include <stdio.h>

//Program to demonstrate pointers
int main(){
//	double x;
//	double *ptr;
	char x;
//	int x = 0;
	int *ptr = NULL;
	x = 10;
	ptr = (int*)&x;
	printf("%p %d\n", ptr, *ptr); 
	ptr++;
	printf("%p\n", ptr);
	return 0;
}