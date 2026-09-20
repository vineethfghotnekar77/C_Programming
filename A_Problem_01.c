#include<stdio.h>

int main(){
    float price[3];

    printf("Enter the price of item 1:");
    scanf("%f",&price[0]);

    printf("Enter the price of item 2:");
    scanf("%f",&price[1]);

    printf("Enter the price of item 3:");
    scanf("%f",&price[2]);

    printf("Total price of item 1:%f\n",price[0]+(0.18*price[0]));
    printf("Total price of item 1:%f\n",price[1]+(0.18*price[1]));
    printf("Total price of item 1:%f",price[2]+(0.18*price[2]));
    printf("Final cost:%f",(price[0]+price[1]+price[2])+(0.18*(price[0]+price[1]+price[2])));

    return 0;
}