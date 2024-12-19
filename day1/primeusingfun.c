//Program to check whether the given number is prime or not
#include <stdio.h>
#include<stdbool.h>
bool isPrime(int n){
	if ( n== 1)
		return false;
	else if (n > 3 && ( n % 2 == 0 || n % 3 == 0))
		return false;
	else{	
		for(int i = 5; i*i<=n; i+=6)  // n = 5
			if ( n % i == 0 || n % (i+2)==0)
				return false;
		return true;
	}
}
//print prime numbers from x to y
int main(){
	int x,y;
	scanf("%d-%d", &x, &y);
	for (int n = x; n<=y; n++)
		if (isPrime(n))
			printf("%d ", n);
	return 0;
}

//11  => 6 x 2 -1
//97  => 6 x 16 + 1
