//int arr[]; // invalid
//int arr[20];
//int n = 10;
//int arr[n]; // turbo c -> invalid
//
//int arr[] = {10, 230, 56,67};
//
//int arr[7] = {10, 230, 56,67};
//
//int arr[n] = {566, 678,77}; // error
#include <stdio.h>

int main(){
//	int arr[10] = {56, 78, 88, 99, 55, 44};
//	int arr[] = {56, 78, 88, 99, 55, 44};
	int arr[] = {56, 78, 88, 99, 55, 11, 22, 789, 77, 5467, 5667};
	int size = sizeof(arr)/sizeof(arr[0]);
//	printf("%d %d", arr[4], 4[arr]);
//	printf("%d", sizeof(arr));
//	printf("%d", sizeof(arr[0]));
//	printf("%d", size);
	for(int index=0; index<size; index++)
		printf("%d ", arr[index]);
	//reverse traversal of list
	printf("\n");
	for(int index=size-1; index>=0; index--)
		printf("%d ", arr[index]);
	
	return 0;
}