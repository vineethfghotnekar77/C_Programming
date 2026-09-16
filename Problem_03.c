#include<stdio.h>

int calcu_perc(int science , int maths ,int english);

int main(){
    int science=95;
    int maths=99;
    int english=90;

    printf("Percentage = %d\n", calcu_perc(science, maths, english));
    return 0;
}

int calcu_perc(int science , int maths , int english){
    return ((science + maths + english) / 3);
}