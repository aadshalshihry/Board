#include "freedomMoves.h"
#include "freedomScoring.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>



#ifndef FREEDOM_GAME
	#define FREEDOM_GAME
	
	



	void getMove(char board[ROW][COL], int row, int col);
	void playFreedomGame();
	void getLocationForPlayers(char board[ROW][COL], int *row, int *col);
	void printBoard(char board[ROW][COL]);
	int rowCollection(char * str);
	void fillArr(char arr[ROW][COL], char ch);



#endif