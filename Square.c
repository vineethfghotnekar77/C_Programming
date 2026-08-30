#include<stdio.h>
#include<math.h>

void square(float n);


int main(){
    float n;
    printf("Enter a number :");
    scanf("%f", &n);
    square(n);
    return 0;
}

void square(float n){
    printf("%f\n",pow(n,3));
}