#include <stdio.h>

int main(){
	int x, y, z;
	x = 7;
	y = x++; 
	z = --x + y--;
	printf("%d %d %d", x,y,z);
	return 0;
}



