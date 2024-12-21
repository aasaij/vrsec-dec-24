#include <stdio.h>

//Program to demonstrate pointers
int main(){
//	double x;
//	double *ptr;
	char x, *ptr;
	x = 10;
	ptr = &x;
	printf("%p\n", ptr);
	ptr++;
	printf("%p\n", ptr);
	return 0;
}