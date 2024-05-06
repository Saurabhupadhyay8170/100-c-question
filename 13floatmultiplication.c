#include<stdio.h>
int main(){
float first,second;
printf("please enter the first number:");
scanf("%f", &first);
printf("please enter the second number:");
scanf("%f", &second);

float result = first*second;
printf("\n product is: %f", result);
printf("\n product is: %.2f", result);

return 0;


}
