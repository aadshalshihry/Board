#include "freedomGame.h"

void printRow(int arr[]){
	int j;
	for(j = 0; j < 4; j++){
		printf("%d ", arr[j]);
	}
	printf("\n");
}

void printCol(int arr[][4], int c){
	int j;
	for(j = 0; j < 4; j++){
		printf("%d ", arr[j][c]);
	}
	printf("\n");
}

int main(){

	// int arr[4][4] = {
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12},
	// 	{13,14,15,16}
	// };

	// int i;
	// for(i = 0; i < 4; i++){
	// 	printRow(arr[i]);
	// }

	// for(i = 0; i < 4; i++){
	// 	printCol(arr, i);
	// }









  playFreedomGame();

  return 0;
}