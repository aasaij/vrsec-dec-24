#include <stdio.h>
//function definition
double calc(double a, double b, char sign){
	switch(sign){
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*': case 'x': case 'X':
			return a*b;
		case '/':
			return a/b;
		default:
			return 0;	
	}	
}
int main(){
	double x, y;
	char opr;
	scanf("%lf %c %lf", &x, &opr, &y); // 10 + 20 
	printf("%g %c %g = %g\n", x, opr, y, calc(x,y,opr)); // 10 + 20 = 30
	return 0;
}