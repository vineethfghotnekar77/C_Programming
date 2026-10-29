#include<stdio.h>
#define MAX 5

struct stack{
    int arr[MAX];
    int top;
};

void push(struct stack *s);
void pop(struct stack *s);
void display(struct stack *s);


int main(){
    struct stack st;
    int choice;
    st.top=-1;

    do{
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.DISPLAY");
        printf("\n4.EXIT");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                push(&st);
                break;

            case 2:
                pop(&st);
                break;

            case 3:
                display(&st);
                break;

            case 4:
                printf("Exiting program.");
                break;

            default:
                printf("Invalid choice");

               

            
        }
    }while(choice!=4);

    return 0;
}

void push(struct stack *s){
    int value;

    if(s->top==MAX-1){
        printf("Stack overflow !");
    }else{
        printf("Enter the number to push:");
        scanf("%d",&value);

        s->top++;
        s->arr[s->top]=value;

        printf("%d is push onto stack.",value);

    }
}

void pop(struct stack *s){
    if(s->top==-1){
        printf("Stack underflow !");
    }else{
        printf("%d is a popped element",s->arr[s->top]);
        s->top--;
    }
}

void display(struct stack *s){
    if(s->top==-1){
        printf("stack is Empty!");
    }else{
        printf("stack elements(top to bottom)");

        for(int i=s->top;i>=0;i--){
            printf("%d\t",s->arr[i]);
        }
    }
}
