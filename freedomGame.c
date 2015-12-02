#include "freedomMoves.h"
#include "freedomScoring.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#define ROW 10
#define COL 10

void fillArr(char arr[ROW][COL], char ch){
  int i, j;
  for(i = 0; i < ROW; i++){
    for(j = 0; j < COL; j++){
      arr[i][j] = ch;
    }
    
  }
}

int rowCollection(char * str){
  int result;
  result = str[0];
  return result - 65;
}

void printBoard(char board[ROW][COL]){
  int i, j, side = ROW;
  printf("\n\n");
  for(i = ROW-1; i >= 0; i--){
    printf("   -----------------------------------------\n");
    printf("%d  ", i);
    for(j = 0; j < COL; j++){
      printf("| %c ", board[i][j]);
    }
    printf("|\n");
  }
  printf("   -----------------------------------------\n");
  printf("     A   B   C   D   E   F   G   H   I   J\n\n\n");
}

// movment 
void getLocationForPlayers(char board[ROW][COL], int *row, int *col){
  char input[25];

  printf("Enter the location (ex: A5): ");
  fgets(input, 25, stdin);
  *row = input[1]-48;
  *col = rowCollection(input);
}




int main(int argc, char **argv){

  char board[ROW][COL] = {' '};
  
  fillArr(board, ' ');
  
  
  printBoard(board);
  
  // fill the array with information
  int row, col;

  getLocationForPlayers(board, &row, &col);
  printf("r:%d c:%d\n", row, col);

  board[row][col] = 'W';
  printBoard(board);

  getLocationForPlayers(board, &row, &col);
  printf("r:%d c:%d\n", row, col);

  board[row][col] = 'B';
  printBoard(board);


  
  return 0;
}















