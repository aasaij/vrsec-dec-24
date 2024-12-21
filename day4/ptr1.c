#include <stdio.h>

int main(){
	int x;
	int *ptr;
	ptr = &x;
	*ptr = 100;
	x++;
	printf("%d %d", x, *ptr);
	
	return 0;
}