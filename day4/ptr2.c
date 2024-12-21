#include <stdio.h>

//Program to demonstrate pointers
int main(){
	int x, y;
	int *ptr;
	x = 10;
	y = 20;
	ptr = &x;
	*ptr = 200;
	ptr = &y;
	*ptr = 300;
	printf("%d %d %d", x, y, *ptr);
	return 0;
}