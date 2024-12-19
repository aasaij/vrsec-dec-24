//Program to check whether the given number is prime or not
#include <stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	if ( n== 1)
		printf("Neither prime nor composite");
	//Method 4		
	else if (n > 3 && ( n % 2 == 0 || n % 3 == 0))
		printf("Not prime!");
	else{	
		for(int i = 5; i<=sqrt(n); i+=6)  // n = 5
		{
			if ( n % i == 0 || n % (i+2)==0){
				printf("Not prime!");
				return 0;
			}
		}
		printf("Prime");	
	}
	return 0;
}

//11  => 6 x 2 -1
//97  => 6 x 16 + 1
