#include "freedomScoring.h"


#ifndef FREEDOM_MOVES
  #define FREEDOM_MOVES

void getMove(char board[ROW][COL], int row, int col);
int correctMoveForThePlayer(int oldRow, int oldCol, int *row, int *col);
void getScoring(char board[ROW][COL]);
int isThereMove(char board[ROW][COL], int i, int j);




#endif