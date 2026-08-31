#include<stdio.h>

float convertTemp(float c);

int main(){
    float c;
    
    printf("Enter the value of Celcius :");
    scanf("%f",&c);
    printf("Temperatur in Faranehiet is :%f",convertTemp(c));
    //convertTemp(c);
    return 0;
}

float convertTemp(float c){
    float f=(c*1.8)+32;
    return f;
}