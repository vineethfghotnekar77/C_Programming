#include<stdio.h>
#include<ctype.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char);
char pop();
int precendence(char);
void infixtopostfix(char[],char[]);


int main(){
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%99s", infix);

    infixtopostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}

void push(char ch){
    stack[++top]=ch;
}

char pop(){
    return stack[top--];
}

int precendence(char ch){
    if(ch=='^')
        return 3;
    else if(ch=='*'||ch=='/')
        return 2;
    else if(ch=='+'||ch=='-')
        return 1;
    else
        return 0;
}

void infixtopostfix(char infix[],char postfix[]){
    int i=0,j=0;
    char ch;

    while(infix[i]!='\0'){
        ch=infix[i];

        if(isalnum(ch)){
            postfix[j++]=ch;
        }
        else if(ch=='('){
            push(ch);
        }
        else if(ch==')'){
            while(top!=-1 && stack[top]!='('){
                postfix[j++]=pop();
            }
            if(top!=-1)
                pop();
            
        }
        else{
            while(top!=-1 && stack[top]!='(' && (precendence(stack[top])>precendence(ch))||(precendence(stack[top])==precendence(ch) && ch!='^')) {
                postfix[j++]=pop();
            } 
            push(ch);
        }
        i++;
    }
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}