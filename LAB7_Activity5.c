#include <stdio.h>

int main(){
 int votes[5] = {1200, 1800, 2300, 900, 1500};
 int candidates[5] = {1, 2, 3, 4, 5};
 int size = sizeof(votes) / sizeof(votes[0]);

 int highest = votes[0];
 int highest_candidate = candidates[0];


 for (int i = 0; i < size; i++)
 {
  if (votes[i] > highest)
  {
    highest = votes[i];
    highest_candidate = candidates[i];
  }

 }
 for (int i = 0; i < size -1; i++)
 { for(int j =0; j < size -i -1; j++){
  if (votes[j] > votes[j + 1])
  {
    int temp = votes[j];
    votes[j] = votes[j + 1];
    votes[j + 1] = temp;

  }
}
 }
 printf("Sorted Array: ");
 for (int i = 0; i < size; i++)
 {
  printf("%d ", votes[i]);
 }

 printf("\nCandidate %d wins with %d votes\n", highest_candidate,highest);

  return 0;
}
