#include <stdio.h>

int main(){
	char x = 250;
	int y;
	y = x + ~x + !x +++x;
//	y = -6 + 5 + 0 + (-5)
	printf("%d", y);
	return 0;
}