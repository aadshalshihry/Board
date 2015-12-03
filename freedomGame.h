#include "freedomMoves.h"
#include "freedomScoring.h"

#ifndef FREEDOM_GAME
	#define FREEDOM_GAME

	void getMove(char board[ROW][COL], int row, int col);
	void playFreedomGame();
	void getLocationForPlayers(char board[ROW][COL], int *row, int *col);
	void printBoard(char board[ROW][COL]);
	int rowCollection(char * str);
	void fillArr(char arr[ROW][COL], char ch);
	void getPlayerOne(char board[ROW][COL], int *row, int *col);
	void getPlayerTwo(char board[ROW][COL], int *row, int *col);
	int howManyEmptyLeft(char board[ROW][COL]);
	void printScore(char board[ROW][COL], char ch);


	




#endif