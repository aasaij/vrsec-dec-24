//Program to check whether the given number is prime or not
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if ( n== 1)
		printf("Neither prime nor composite");
	else{
		for(int i = 2; i<n; i++)  // n = 5
		{
			if ( n % i == 0){
				printf("Not prime!");
				return 0;
			}
		}
		printf("Prime");	
	}
	return 0;
}