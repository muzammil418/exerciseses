#include <stdio.h>
#include <stdlib.h>
/*

if (false)
 else if ('r' == r && 'p' == s)
	 int five = 2;
*/

  void admin(char player1, char player2)//p1 = r, p2 = p
  {
	int result;
  	char r = 'r';
	char p = 'p';
	char s = 's';
  
   if(player1 == player2)
  {
	   printf("tie\n");
  }
  else if (player1 == r && player2 == s)
  {
	 printf("player one is win\n");
  }
  else if (player1 == s && player2 == r)
  {
	  printf("player two win\n");
  }
  else if (player1 == r && player2 == p)
  {
	  printf("player one win\n");
  }
  else if (player1 == p && player2 == r)
  {
	  printf("player two win\n");
  }
  else if (player1 == s && player2 == p)
  {
	  printf("player one is win\n");
  }
  else
  {
	  printf("player two is win\n");
  }
  
  return ;
}
  
int main()
{
	char p1;
	char p2;
	
	printf("player one chosse between r, p, s\n");
	scanf(" %c", &p1);
	
	printf("player two chosse between r, p, s\n");
	scanf(" %c", &p2);
	
	admin(p1, p2);

  return 0;
}
