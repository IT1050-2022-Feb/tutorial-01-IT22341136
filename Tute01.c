
#include <stdio.h>

int main() {

  int mark1, mark2;
  float average;

  printf("Input the Mark 1 :");
  scanf("%d",&mark1);

  printf("\nInput the Mark 2 :");
  scanf("%d",&mark2);
  
  average = (mark1 + mark2) /2.0;

  printf("\nAverage is %.2f",average);
  
  
  return 0;
}

