#include "freedomMoves.h"
#include "freedomScoring.h"



void getMove(char board[ROW][COL], int row, int col){
  int i, j, side = ROW;
  printf("\n\n");
  for(i = ROW-1; i >= 0; i--){
    
    // print (-)
    printf("   ");
    for(j = 0; j < COL; j++){
      printf("%s", "----");
    }
    printf("-\n");


    printf("%d  ", i);
    for(j = 0; j < COL; j++){
      if(row == i && col == j){
        printf("| %c ", board[i][j]);
      } else if(board[i][j] != ' '){
          printf("| %c ", board[i][j]);
      } else if(row-1 == i || row == i || row+1 == i){
        if(col-1 == j || col == j || col+1 == j){
          printf("| * ");
        } else {
            printf("| %c ", board[i][j]);

        }
        
      } else {
        printf("| %c ", board[i][j]);

      }
    }
    printf("|\n");
  }
  
  // printf("   -----------------------------------------\n");
  // print (-)
  printf("   ");
  for(j = 0; j < COL; j++){
    printf("%s", "----");
  }
  printf("-\n");

  // printf("     A   B   C   D   E   F   G   H   I   J\n\n\n");
  // print ABC danimc
  printf("     ");
  for(j = 0; j < COL; j++){
    printf("%c   ", 65 + j);
  }
  printf("\n\n");
}

int correctMoveForThePlayer(int oldRow, int oldCol, int *row, int *col){
  int result = 0;
  if(oldRow-1 == *row || oldRow == *row || oldRow+1 == *row){
    if(oldCol-1 == *col){
      result = 1;
    } else if(oldCol == *col){
      result = 1;
    } else if(oldCol+1 == *col){
      result = 1;
    }
  } 
  return result;
}

int isThereMove(char board[ROW][COL], int row, int col){


    if(board[row-1][col-1] == ' ' && row-1 >= 0 && col-1 >= 0)
      return 1;
    
    if(board[row-1][col] == ' ' && row-1 >= 0)
      return 1;
    
    if(board[row-1][col+1] == ' ' && row-1 >= 0 && col+1 < COL)
      return 1;
    
    if(board[row][col-1] == ' ' && col-1 >= 0)
      return 1;
    
    if(board[row][col+1] == ' ' && col+1 < COL)
      return 1;
    
    if(board[row+1][col-1] == ' ' && row+1 < ROW && col-1 >= 0 )
      return 1;
    
    if(board[row+1][col] == ' ' && row+1 < ROW)
      return 1;
    
    if(board[row+1][col+1] == ' ' && row+1 < ROW && col+1 < COL)
      return 1;

  return 0;
}






