#include "freedomScoring.h"

int socreDiagonalRight(char board[ROW][COL], char ch){
	int i, j, k, a,  result = 0, count = 0;

	char temp[ROW][COL] = {' '};
	copyArrayToArray(board, temp);

	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++){
			for(count = 0, k = i, a = j; k < ROW || a < COL; k++, a++){
				if(temp[k][a] == ch){
					count++;					
					temp[k][a] = '*';
				} else {
					if(count == 4){
						result++;
						count = 0;
					}
					count = 0; 
				}
			}
			if(count == 4)
				result++;	
		}
	}
	return result;
}


int socreDiagonalLeft(char board[ROW][COL], char ch){
	int i, j, k, a,  result = 0, count = 0;

	char temp[ROW][COL] = {' '};
	copyArrayToArray(board, temp);

	for(i = 0; i < ROW; i++){
		for(j = COL-1; j >= 0; j--){
			for(count = 0, k = i, a = j; k < ROW && a >= 0; k++, a--){

				if(temp[k][a] == ch){
					count++;					
					temp[k][a] = '*';
				} else {
					if(count == 4){
						result++;
						count = 0;
					}
					count = 0; 
				}
			}
			if(count == 4)
				result++;	
		}
		
	}
	return result;
}


int scoreTopDown(char board[ROW][COL], char ch, int indexCol){
	int i, result = 0, count = 0;

	for(i = 0; i < ROW; i++){
		if(board[i][indexCol] == ch){
			count++;
			if(i == ROW-1){
				if(count == 4){
					result++;
				}
			}

		} else {
			
			if(count == 4){
				result++;
			} else {
				count = 0;
			}
		}
	}
	return result;
}


int scoreTopDownHelper(char board[ROW][COL], char ch){
	int i , j , result = 0;

	for(j = 0; j < COL; j++){
			result += scoreTopDown(board, ch, j);
		}

	return result;
}

int scoreLeftRight(char board[], char ch){
	int j, result = 0, count = 0;
	for(j = 0; j < COL; j++){
		if(board[j] == ch){
			count++;
			if(j == COL-1){
				if(count == 4){
					result++;
				}
			}

		} else {
			
			if(count == 4){
				result++;
			} else {
				count = 0;
			}
		}
	}
	return result;
}


int scoreLeftRightHelper(char board[ROW][COL], char ch){
	int i , j , result = 0;
		for(i = 0; i < ROW; i++){
			result += scoreLeftRight(board[i], ch);
		}
	return result;
}

void copyArrayToArray(char board[ROW][COL], char temp[ROW][COL]){
  int i, j;
  for(i = 0; i < ROW; i++){
    for(j = 0; j < COL; j++){
      temp[i][j] = board[i][j];
    }
  }
}








