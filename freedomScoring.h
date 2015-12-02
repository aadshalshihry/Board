#define ROW 4
#define COL 4

#ifndef FREEDOM_SCORING
  #define FREEDOM_SCORING

	void ScoreRightDiagonal(char board[ROW][COL]);
	void ScoreLeftDiagonal(char board[ROW][COL]);
	void ScoreTopBottom(char board[ROW][COL]);
	void ScoreLeftRight(char board[ROW][COL]);


#endif