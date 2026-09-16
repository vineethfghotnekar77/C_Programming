#include<stdio.h>

void fibonacci(int n,int a,int b);

int main(){
    int n,a=0,b=1;
    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Fibonacci series is :");
    fibonacci(n,a,b);
    
}

void fibonacci(int n,int a,int b){
    int i,c;
    for(i=0;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        
    }
    
}