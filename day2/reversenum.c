//Program to reverse a number
#include <stdio.h>
//int reverse(int n){
//	int sum = 0;
//	while(n!=0){
//		int r = n % 10;
//		sum = sum * 10 + r;
//		n = n / 10;
//	}
//	return sum;
//}
long long int reverse(long long int n){
	long long int sum = 0;
	while(sum=sum*10+n%10,n=n/10);
	return sum;
}
int main(){
	long long int num;
	scanf("%lld", &num);
	printf("%lld", reverse(num));
	return 0;
}