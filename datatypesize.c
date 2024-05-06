#include<stdio.h>
int main(){
  int integer;
  float decimal;
  double doub;
  char charcter;
  printf("\nThe size of int is %lu bytes",sizeof(integer));
  printf("\nThe size of decimal is %lu bytes",sizeof(decimal));
  printf("\nThe size of double is %lu bytes",sizeof(doub));
  printf("\nThe size of character is %lu bytes",sizeof(charcter));

}