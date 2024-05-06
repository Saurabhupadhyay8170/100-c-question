#include<stdio.h>
int main(){
  int first, second, temp;
  printf("Please enter the first number:");
  scanf("%d",&first);
   printf("Please enter the second number:");
  scanf("%d",&second);

  //swapping
  temp = first;
  first = second;
  second = temp;

  printf("Thevalue of first is %d and second is %d",first,second);
  return 0;


}