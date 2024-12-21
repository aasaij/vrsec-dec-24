//Program to demonstrate void*
#include <stdio.h>
int main(){
	int x = 10;
	char c = 'X';
	float f = 10.5;
	double d = 1.23456;
	void* ptr;
	ptr = &x;  //ptr is pointing an integer
	printf("%d\n", *(int*)ptr);
	ptr = &c; // ptr is pointing a character
	printf("%c\n", *(char*)ptr);
	ptr = &f; //ptr is pointing a float
	printf("%g\n", *(float*)ptr);	
	ptr = &d; // ptr is pointing a double
	printf("%g\n", *(double*)ptr);
	
	return 0;
}