#include<stdio.h>
int main(){
  const float PI=3.14159;
  int radius;

  printf("Please enter the radius of the circle in cms:");
  scanf("%d",&radius);
  printf("The area of the your circle %f cm*cm",PI * radius *radius);
}
