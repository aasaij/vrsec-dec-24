#include <stdio.h>

//Program to demonstrate pointers
int main(){
	int x;
	int *ptr;
	x = 10;
	ptr = &x;
//	*ptr++ = 200;
	*ptr = 200;
//	(*ptr)++;
	*++ptr = 200;
	x++;
	printf("%d %d", x,*ptr);
	return 0;
}