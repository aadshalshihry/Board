#include "freedomMoves.h"
#include "freedomGame.h"

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
