#include <stdio.h>
//Input:
//	Tanuja
//Output	
//	Tanuja
//	Tanuj
//	Tanu
//	Tan
//	Ta
//	T
int main(){
	char str[100];
	int len;
	scanf("%s%n", str, &len);
//	printf("%*.*s", 20,15, "Mounika is sooo beautiful!");
	for (int i =len; i>=1; i-- )
		printf("%*.*s%-*.*s\n", len,i,str,len,i,str);
	for (int i =1; i<=len; i++)
		printf("%*.*s%-*.*s\n", len,i,str,len,i,str);


		
	return 0;
}