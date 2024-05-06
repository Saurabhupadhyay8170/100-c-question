#include<stdio.h>
int main(){
  int first,second;
  printf("Please enter the first number:");
  scanf("%d",&first);
 printf("Now, enter the second number:");
  scanf(" %d",&second);
  printf("Here are the results of the operation\n");
  printf("\n %d +%d = %d",first,second,(first+second));
  printf("\n%d - %d = %d",first,second,(first-second));
  printf("\n%d * %d = %d",first,second,(first*second));
  printf("\n%d / %d = %d",first,(first/second));
  printf("\n%d modul0 %d = %d",first,second,(first%second));
  return 0;





}
