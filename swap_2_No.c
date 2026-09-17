#include<stdio.h>

void swap(int a,int b);
void _swap(int*a,int*b);

int main(){
    int x=3,y=7;
    //swap(x,y);
    _swap(&x,&y);
    printf("x=%d and y=%d",x,y);
    return 0;
}

//Call by value
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d",a,b);

}

//Call by refrence
void _swap(int*a,int*b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a = %d and b=%d\n",*a,*b);

}