#include<stdio.h>
int main(){
int a,b,c,d;
printf("please enter the first side:");
scanf("%d", &a);
printf("please enter the second number:");
scanf("%d", &b);
printf("please enter the third number:");
scanf("%d", &c);
printf("please enter the fourth number:");
scanf("%d", &d);

int perimeter = a +b+c+d;

printf("\n Perimeter of the shape is: %d", perimeter);

return 0;


}

