//Program to find an element in a list
#include <stdio.h>
#include <stdbool.h>
bool isFound(int arr[],int size, int search){
	//implementing linear seatch algorithm
	for(int index = 0; index<size; index++)
		if (arr[index]==search)
			return true;
	return false;
}
int main(){
	int n;
	scanf("%d", &n);
	int list[n], searchElement;
//	for (int index = 0; index<n; scanf("%d", &list[index++]));
	for (int index = 0; index<n;index++)
		scanf("%d", &list[index]);
	scanf("%d", &searchElement);
	printf("%s", isFound(list,n, searchElement)?"Found":"Not Found");	
	return 0;
}