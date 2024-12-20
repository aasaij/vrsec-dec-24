#include <stdio.h>

int printMatrix(int rowSize, int colSize, int arr[][colSize]){
	for (int i = 0; i<rowSize; i++){// rows
		for (int j= 0; j<colSize; j++) // cols
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

int main(){
	int arr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int rowSize = sizeof(arr)/sizeof(arr[0]);
	printMatrix(rowSize, 4, arr);
	return 0;
}