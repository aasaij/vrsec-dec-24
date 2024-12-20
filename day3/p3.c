#include <stdio.h>

int main(){
	int x, y, z;
	x = 10;
	y = x++; // y = x ; x = x  + 1
	z = ++x + y++; // x = x + 1; z = x + y; y = y + 1
	printf("%d %d %d", x,y,z);
	return 0;
}
//12 11 22
//10 12 26
//10 12 23
//10 10 21
//10 11 23




