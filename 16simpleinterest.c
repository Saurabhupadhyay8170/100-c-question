#include<stdio.h>
int main(){
float principal,rate,time;
printf("Welcome to the simple interest calculation.\n");
printf("please enter the principal:");
scanf("%f", &principal);
printf("please enter the rate:");
scanf("%f", &rate);
printf("please enter the time:");
scanf("%f", &time);


float interest =(principal*rate*time)/100;

printf("\n simple Interest is: %.2f",interest);

return 0;


}

