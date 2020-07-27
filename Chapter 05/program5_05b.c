// Program 5.1b modifyng constant array
#include <stdio.h>

//these constants are redundant for educational purpose
// King's value is undefined 
#define king 0
#define pawn 1
#define knight 2
#define bishop 3
#define rook 4
#define queen 5

//white pieces respectivly:
// 6 7 8 9 10

int main(void)
{
  const int values[6] = {0, 1, 3, 3, 5, 9};

  int board[8][8] = { // chessboard
	  { 0, 0, 4, 0, 0, 0, 0, 0,},
	  { 4, 0, 0, 2, 5, 0, 1, 0,},
	  { 1, 0, 0, 0, 1, 0, 0, 1,},
	  { 0, 0, 1, 0, 0, 0, 0, 0,},
	  { 0, 0, 0, 1, 6, 6, 0, 0,},
	  { 0, 0, 0, 0, 0, 0, 0,10,},
	  { 6, 6, 0, 0, 8, 0, 6, 6,},
	  { 0, 0, 9, 0, 0, 9, 0, 0,}  
  }; 

  int score = 0;
  
  for(int i=0; i<8; i++) {
    for(int j=0; j<8; j++) {
      //we sperate colors:
	  if(board[i][j]<6)
	    score += values[board[i][j]];
	  else
	    score -= values[board[i][j]%6];
	}
  }

  
  printf("\nScore : %d\n", score);
  
  if(score>0) printf("\nSpassky is winning to Fischer");
  else printf("\nFischer is winning to Spassky");
  
  printf("... for now !\n");
  
  return 0;
}
