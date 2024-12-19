//Program to find max and second max from list of values
#include <stdio.h>
#include <limits.h>
int main(){
	int size, max, smax;
	scanf("%d", &size);
	int arr[size];
	for(int index = 0; index<size; index++)
		scanf("%d", &arr[index]);
	max = smax = INT_MIN;
	for (int index = 0; index<size; index++){
		if (arr[index]>max){
			smax = max;
			max = arr[index];
		}
		else if (arr[index]>smax && arr[index]!=max)
			smax = arr[index];
	}
	printf("Max: %d Smax : %d", max,smax);
	return 0;
}

Test Link : https://tinyurl.com/yrvdzy27