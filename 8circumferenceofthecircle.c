#include<stdio.h>
int main(){
  const float PI=3.14159;
  int radius;

  printf("Please enter the radius of the circle in cms:");
  scanf("%d",&radius);
  printf("The circumference of the your circle %f cm", 2 *PI * radius);
}
