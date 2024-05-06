#include<stdio.h>
int main(){
float principal,rate,time;
printf("Welcome to the compound interest calculator.\n");
printf("please enter the principal:");
scanf("%f", &principal);
printf("please enter the rate:");
scanf("%f", &rate);
printf("now, enter the time:");
scanf("%f", &time);


float interest = principal * ((1+rate/100),time);

printf("\n compound Interest is: %.2f",interest);

return 0;


}

