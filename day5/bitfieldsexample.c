//Bit Fields
#include <stdio.h>

struct Flag{
	unsigned int x: 4;
	unsigned int y : 3;
	unsigned int z : 2;
};

int main(){
	struct Flag f = {15,10,7};
//	printf("%lu", sizeof(struct Flag));
	printf("%d %d %d", f.x, f.y, f.z);
	return 0;
}