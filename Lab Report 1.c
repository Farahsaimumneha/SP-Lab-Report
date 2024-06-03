#include<stdio.h>
int main(){

float principle,rate,time,simple_interest;

printf("Enter the principle amount:");
scanf("%f",&principle);

printf("Enter the rate of interest per annum:");
scanf("%f",&rate);

printf("Enter the time period in years:");
scanf("%f",&time);

simple_interest =(principle*rate*time)/100;

printf("Simple Interest:%.2f\n",simple_interest);

return 0;

}
