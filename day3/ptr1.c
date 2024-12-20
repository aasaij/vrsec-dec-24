//Pointers introduction
#include <stdio.h>

int main(){
	int a = 10;
	printf("Value: %d %d", a , *(&a));
	printf("\nAddress : %p", &a);
	return 0;
}