#include<stdio.h>

int Sum(int a,int b);


int main(){
    int a,b,sum;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("The sum is: %d", Sum(a,b));
    return 0;
}

int Sum(int a,int b){
    return a+b;
}