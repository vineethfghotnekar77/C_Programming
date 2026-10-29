#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

void push();
void pop();
void display();

int main(){
    int choice;

    do{
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting th program.");
                break;

            default :
            printf("Invalid choice !");
        }
    }while(choice!=4);

    return 0;
}

void push(){
    int value;

    if(top==MAX-1){
        printf("stack overflow!");
    }else{
        printf("Enter the push element:");
        scanf("%d",&value);

        top++;
        stack[top]=value;

        printf("%d element is pushed into stack",value);
    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow!");
    }else{
        printf("Popped Element:%d",stack[top]);
        top--;
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty!");
    }else{
        printf("Stack elements are:");

        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
    }
}