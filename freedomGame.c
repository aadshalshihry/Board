#include "freedomGame.h"


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
    
    // printf("   -----------------------------------------\n");
    // print (-)
    printf("   ");
    for(j = 0; j < COL; j++){
      printf("%s", "----");
    }
    printf("-\n");

    printf("%d  ", i);
    for(j = 0; j < COL; j++){
      printf("| %c ", board[i][j]);
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

// movment 
void getLocationForPlayers(char board[ROW][COL], int *row, int *col){
  char input[25];

  printf("Enter the location (ex: A5): ");
  fgets(input, 25, stdin);
  *row = input[1]-48;
  *col = rowCollection(input);
}

void getPlayerOne(char board[ROW][COL], int *row, int *col){
  int oldRow = *row, oldCol = *col;
  while(1){
    printf("Player 1:\n");

    getLocationForPlayers(board, row, col);
    printf("r:%d c:%d\n", *row, *col);

    if(!correctMoveForThePlayer(oldRow, oldCol, row, col)){
      printf("\nWRONG ENTRY. TRY AGAIN.\n");
    } else if(*row < ROW && *col < COL){
      board[*row][*col] = 'W';
      getMove(board, *row, *col);
      break;
    } else {
      printf("\nWRONG ENTRY. TRY AGAIN.\n");
    }

    
  }
}


void getPlayerTwo(char board[ROW][COL], int *row, int *col){
  int oldRow = *row, oldCol = *col;
  while(1){
    printf("Player 2:\n");
    
        printf("r:%d c:%d\n", *row, *col);

    getLocationForPlayers(board, row, col);
    printf("r:%d c:%d\n", *row, *col);

    if(!correctMoveForThePlayer(oldRow, oldCol, row, col)){
      printf("\nWRONG ENTRY. TRY AGAIN.\n");
    } else if(*row < ROW && *col < COL){
      board[*row][*col] = 'B';
      getMove(board, *row, *col);
      break;
    } else {
      printf("\nWRONG ENTRY. TRY AGAIN.\n");
    }
  }
}


void playFreedomGame(){

  char board[ROW][COL] = {' '};
  
  fillArr(board, ' ');
  
  
  printBoard(board);
  
  // fill the array with information

  // TODO:
  // 1. make sure the to enter the right location
  // 2. make it as funtion
  // 3. 
  int row = 0, col = 0, i = 0;
  while(i < (ROW)){
    getPlayerOne(board, &row, &col);
    getPlayerTwo(board, &row, &col);
    

    i++;
  }

}















