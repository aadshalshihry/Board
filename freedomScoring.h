#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#ifndef FREEDOM_SCORING
  #define FREEDOM_SCORING

	#define ROW 10
	#define COL 10

	int socreDiagonalRight(char board[ROW][COL], char ch);

	int socreDiagonalLeft(char board[ROW][COL], char ch);

	int scoreTopDown(char board[ROW][COL], char ch, int indexCol);
	int scoreTopDownHelper(char board[ROW][COL], char ch);

	int scoreLeftRight(char board[ROW], char ch);
	int scoreLeftRightHelper(char board[ROW][COL], char ch);

	void copyArrayToArray(char board[ROW][COL], char temp[ROW][COL]);



#endif