#include <stdio.h>

int main(){

  int scores[11] = {23, 67, 45, 89, 0, 12, 78, 50, 37, 55, 22};
  int player[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  int size = sizeof(scores) / sizeof(scores[0]);

  int highest = scores[0];
  int higest_player = player[0];

  for (int i = 0; i < size ; i++)
  {
    if (scores[i] > highest)
    {
      highest = scores[i];
      higest_player = player[i];
    }

  }
  printf("Highest score: %d by player %d\n", highest,higest_player);


  return 0;
}
