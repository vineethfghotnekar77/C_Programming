#include<stdio.h>

void work(int a,int b,int*sum,int*prod,int*avg);

int main(){
    int a=5,b=6;
    int sum,prod,avg;
    work(a,b,&sum,&prod,&avg);

    printf("Sum=%d prod=%d avg=%d\n",sum,prod,avg);
    return 0;
}

void work(int a,int b,int*sum,int*prod,int*avg){
     *sum=a+b;
     *prod=a*b;
     *avg=(a+b)/2;

}