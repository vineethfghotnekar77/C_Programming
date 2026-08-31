#include<stdio.h>

int fact(int n);

int main(){
    printf("The Factorial of a number is :%d",fact(5));
}

int fact(int n){
    if(n == 1){
        return 1;
    }
    int FactN1 = fact(n-1);
    int FactN = fact(n-1)*n;
    return FactN;

}