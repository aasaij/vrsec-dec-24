#include <stdio.h>
#include <math.h>
int main(){
//	printf("%f", 10/4);
//	printf("%hi", 010);
//	printf("%hi", 0x10);
//	printf("%hi", 0b1010);
//	printf("%f", 10.0 % 2.5); // error
	printf("%f", fmod(11,2.5)); // error
	return 0;
}