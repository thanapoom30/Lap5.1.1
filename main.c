#include <stdio.h>
int main(void)
{
  int score;
  printf("Input score: ") ;
  scanf("%d",&score);
  if ((score >= 80) && (score <= 100))  printf("A");
  else if ((score >= 70) && (score < 80)) printf("B");
    else if ((score >= 60) && (score < 70)) printf("C");
      else if ((score >= 50) && (score < 60)) printf("D");
        else  printf("F");
  return 0;
}
