#include <stdio.h>

//Function Declaration
void PrintHello();
void PrintGoodbye();

//Function call
int main(){
    PrintHello();
    PrintGoodbye();
    PrintGoodbye();
    return 0;
}

//Function Defination
void PrintHello(){
    printf("Hello World.\n");
    
}

void PrintGoodbye(){
    printf("Good Bye.\n");
}
