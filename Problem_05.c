#include<stdio.h>

int main(){
    int a , b;
    int *p,*q;

    printf("Enter two values:");
    scanf("%d %d",&a,&b);

    p=&a;
    q=&b;

    if(*p>*q){
        printf("%d is greater than %d",a,b);
    }
    else{
        printf("%d is greater than %d",b,a);
    }
    return 0;
}