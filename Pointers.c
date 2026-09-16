#include<stdio.h>

int main(){
    int age=22;
    int *ptr=&age;
    
    //Address of age
    printf("%p\n",&age);

    printf("%p\n",ptr);

    printf("%p",&ptr);

    return 0;
}