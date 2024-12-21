//Program to demonstration function receiving array as parameter
#include <stdio.h>
void change(int a[],int n){
	a[n-1] = 100;
}

int main(){
	int arr[] = {10,20,30,40};
	int size = sizeof(arr)/ sizeof(arr[0]);
	printf("%d ", arr[size-1]);
	change(arr, size);
	printf("%d", arr[size-1]);
	return 0;
}