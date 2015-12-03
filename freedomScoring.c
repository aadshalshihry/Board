#include "freedomScoring.h"

int socreDiagonalRight(char board[ROW][COL], char ch, int indexRow, int indexCol){
	// printf(" [+] socreDiagonalRight %c\n", board[indexRow][indexCol]);
	int i, result = 0, count = 0;
	if(board[indexRow][indexCol] == ch){
		for(i = 0; i < ROW; i++){
			if(indexRow < ROW && indexCol < COL){
				if(board[indexRow][indexCol] == ch){
					// printf("[%d][%d]: %c ", indexRow, indexCol, board[indexRow][indexCol]);
					count++;
				} else if(board[indexRow][indexCol] != ch){
					// count = 0;
					// printf("[-] Break\n");
					break;
				}
			}
			indexCol++;
			indexRow++;
		}
		if( count != 4){
			// printf("count != 4 \n");
			return 0;
		}

		if(count == 4){
			result++;
		}

	}
	// printf("Befer return %d\n", result);
	return result;
}

int socreDiagonalRightHelper(char board[ROW][COL], char ch){
	int i , j , result = 0;
	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++){
			result += socreDiagonalRight(board, ch, i, j);
			// printf(" ==> %d\n" , result);
		}
		
	}


	return result;

}

int socreDiagonalLeft(char board[ROW][COL], char ch, int indexRow, int indexCol){
	int i, result = 0, count = 0;
	if(board[indexRow][indexCol] == ch){
		for(i = 0; i < ROW; i++){
			if(indexRow >= 0 && indexCol >= 0){
				if(board[indexRow][indexCol] == ch){
					// printf("[%d][%d]: %c ", indexRow, indexCol, board[indexRow][indexCol]);
					count++;
				} else if(board[indexRow][indexCol] != ch){
					// count = 0;
					// printf("[-] Break\n");
					break;
				}
			}
			indexCol--;
			indexRow++;

		}

		if(count != 4){
			return 0;
		}

		if(count == 4){
			result++;
		}

	}
	return result;
}
	
int socreDiagonalLeftHelper(char board[ROW][COL], char ch){
	int i , j , result = 0;
	for(i = 0; i < ROW; i++){
		for(j = COL-1; j >= 0; j--){
			result += socreDiagonalLeft(board, ch, i, j);
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

int scoreLeftRight(char board[ROW][COL], char ch, int indexRow, int indexCol){
	int i, result = 0, count = 0;
	if(board[indexRow][indexCol] == ch){
		for(i = 0; i < ROW; i++){
			if(indexRow < ROW && indexCol < COL){
				if(board[indexRow][indexCol] == ch){
					// printf("[%d][%d]: %c ", indexRow, indexCol, board[indexRow][indexCol]);
					count++;
				} else if(board[indexRow][indexCol] != ch){
					// count = 0;
					// printf("[-] Break\n");
					break;
				}
			}
			
			indexCol++;

		}

		if(count != 4){
			return 0;
		}

		if(count == 4){
			result++;
		}

	}
	return result;
}


int scoreLeftRightHelper(char board[ROW][COL], char ch){
	int i , j , result = 0;
	for(j = 0; j < COL; j++){
		for(i = 0; i < ROW; i++){
			result += scoreLeftRight(board, ch, i, j);
		}
	}
	return result;
}








