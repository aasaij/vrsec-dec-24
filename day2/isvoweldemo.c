//Program to check whether the given character is vowel or not
#include <stdio.h>
#include <stdbool.h>
//bool isVowel(char c){
//	if (c=='a' || c =='e' || c=='i' || c == 'o' || c =='u' ||
//		c=='A' || c =='E' || c=='I' || c == 'O' || c =='U'	)
//		return true;
//	else
//		return false;
//}
bool isVowel(char c){
	return (c=='a' || c =='e' || c=='i' || c == 'o' || c =='u' ||
		c=='A' || c =='E' || c=='I' || c == 'O' || c =='U'	);
}
bool isAlpha(char c){
	return ((c >='A' && c <='Z') || (c >='a' && c<='z'));
}

bool isConsonant(char ch){
	return (isAlpha(ch) && !isVowel(ch));
}
int main(){
	char ch;
	scanf("%c", &ch);  
//	printf("%s", isVowel(ch)?"Yes":"No");
	printf("%s", isConsonant(ch)?"Yes":"No");	
	return 0;
}

/*
ASCII - Character encoding format
A -> 65 --> Binary 
65 to 90
A to  Z

97 to 122
a  to z

0 to 9
48 to 57


*/