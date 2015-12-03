#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#ifndef FREEDOM_SCORING
  #define FREEDOM_SCORING

	#define ROW 5
	#define COL 5

	int socreDiagonalRight(char board[ROW][COL], char ch, int indexRow, int indexCol);
	int socreDiagonalRightHelper(char board[ROW][COL], char ch);

	int socreDiagonalLeft(char board[ROW][COL], char ch, int indexRow, int indexCol);
	int socreDiagonalLeftHelper(char board[ROW][COL], char ch);

	int scoreTopDown(char board[ROW][COL], char ch, int indexCol);
	int scoreTopDownHelper(char board[ROW][COL], char ch);

	int scoreLeftRight(char board[ROW][COL], char ch, int indexRow, int indexCol);
	int scoreLeftRightHelper(char board[ROW][COL], char ch);



#endif